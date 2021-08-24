/**
 * @file delete_patientrecords_file.c
 * @author niku09
 * @brief 
 * @version 0.1
 * @date 2021-08-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "vaccination.h"

/**
 * @brief Delete a specific patient record by id from the file 
 * 
 * @param fptr 
 * @param ft 
 * @param id 
 * @return error_t 
 */
error_t delete_patientrecords_file(FILE **fptr, FILE **ft, int id)
{
    patient rec;
    *ft = fopen("TEMP.DAT", "wb+");

    rewind(*fptr);
    while (fread(&rec, sizeof(rec), 1, *fptr) == 1)
    {
        if (rec.uniq_id != id)
        {
            fwrite(&rec, sizeof(rec), 1, *ft);
        }
    }
    return SUCCESS;
}

/**
 * @brief Delete deleted patient record from the index file having his id
 * 
 * @param fptr 
 * @param ft 
 * @param id 
 * @return error_t 
 */
error_t delete_patient_index_file(FILE **fptr, FILE **ft, int id)
{
    int idx;
    *ft = fopen("TEMP.DAT", "wb+");

    rewind(*fptr);
    while (fread(&idx, 4, 1, *fptr) == 1)
    {
        if (idx != id)
        {
            fwrite(&idx, 4, 1, *ft);
        }
    }
    fclose(*ft);
    return SUCCESS;
}
