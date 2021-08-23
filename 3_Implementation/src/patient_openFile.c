/**
 * @file patient_openFile.c
 * @author Srinidhi V Nayak
 
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "vaccination.h"
/**
 * @brief function to open patient file
 *
 */

error_t patient_openFile(char *filename, char *mode, FILE **fptr)
{
    *fptr = fopen(filename,mode);
    if(*fptr==NULL)
    {
        *fptr = fopen(filename,"wb+");
    }    
    return SUCCESS;
}
