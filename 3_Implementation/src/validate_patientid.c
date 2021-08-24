
/**
 * @file validate_patientid.c
 * @author Srinidhi V Nayak
 * @version 0.1
 * @date 2021-08-23
 * @copyright Copyright (c) 2021
 * 
 */

#include "vaccination.h"

/**
 * @brief 
 * 
 * @param fptr 
 * @param id 
 * @return error_t 
 */
error_t validate_patientid(FILE **fptr, int id)
{
    int existing_id;
    while (fread(&existing_id, 4, 1, *fptr) == 1)
    {
        if (existing_id == id)
        {

            return ID_EXISTS;
        }
    }
    return SUCCESS;
}
