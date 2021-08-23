/**
 * @file delete_all.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief function to delete patient from the record
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "vaccination.h"

/**
 * @brief delete all patient from record
 * 
 * @param start 
 */

void delete_allpatientrecords(patient *start)
{

    patient *current;
    current = start;
    patient *ptr;
    while (current != NULL)
    {
        ptr = current->next;
        free(current);
        current = ptr;
    }
    start = NULL;
}

/**
 * @brief  delete starting patient record
 * 
 * @param start 
 * @return patient* 
 */
patient *delete_begin(patient *start)
{
    patient *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}
