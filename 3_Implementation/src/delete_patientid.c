/**
 * @file delete_patient.c
 * @author Amit kumar sahni (amit.sahni@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "vaccination.h"

/**
 * @brief function to delete patient record
 * 
 * @param start 
 * @param id 
 * @return patient* 
 */

patient *delete_patientid(patient *start, int id){

    patient *ptr;
    ptr = start;
    if(start == NULL){
        return NULL;
    }
    else{
        if(ptr->uniq_id == id){
            start = delete_beg(start);
            return start;
        }else{
            patient *preptr;
            while(ptr->uniq_id != id){
                preptr = ptr;
                ptr = ptr->next;
            }
            preptr->next = ptr->next;
            free(ptr);
            return start;
        }
    }

} 
