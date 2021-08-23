/**
 * @file find_by_patientid.c
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
 * @brief it display all the data of patient
 * 
 * @param start 
 * @param id 
 * @param res 
 * @param found_id 
 * @return error_t 
 */

error_t find_by_patientid(patient *start, int id, patient *res, int *found_id){

    patient *ptr;
    ptr = start;
   
    if(start == NULL){
        return NO_HEAD_EXIST;
    }
    else{
        int found = 0;
        while(ptr != NULL){
            if(ptr->uniq_id == id){
                found = 1;
                break;
            }
            ptr = ptr->next;
        }
        if(found == 1){
            *found_id = 1;
            res->uniq_id = ptr->uniq_id;
            strcpy(res->firstname ,ptr->firstname);
            strcpy(res->lastname, ptr->lastname);
            strcpy(res->aadhar_num, ptr->aadhar_num);
            strcpy(res->date_of_vaccine, ptr->date_of_vaccine);
            res->age = ptr->age;
            res->height = ptr->height;
            res->weight = ptr->weight;
            res->shot = ptr->shot; 
            res->insurance = ptr->insurance;
        }else{
            *found_id = 0;
        }

        return SUCCESS;
    }

} 
