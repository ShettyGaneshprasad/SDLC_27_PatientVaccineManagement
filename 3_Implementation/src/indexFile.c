/**
 * @file indexFile.c
 * @author Vysyaraju Srikar 
 * @brief To Create a function that will store nothing more than patient ids to avoid redundant entry.
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "vaccination.h"

/**
 * @brief To Create a function that will store nothing more than patient ids to avoid redundant entry.
 * 
 * @param filename 
 * @param mode 
 * @param fptr 
 * @return error_t 
 */
error_t patient_indexFile(char *filename, char *mode, FILE **fptr)
{
   *fptr = fopen(filename, mode);
   if (*fptr == NULL)
   {
      *fptr = fopen(filename, "wb+");
   }
   return SUCCESS;
}