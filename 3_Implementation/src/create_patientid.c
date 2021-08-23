/**
 * @file create_patientid.c
 * @author Mihir Adarsh
 * @brief 
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "vaccination.h"
/**
 * @brief Create a linkedlist of patients
 * 
 * @param start 
 * @param id 
 * @param firstname 
 * @param lastname 
 * @param aadhar_num 
 * @param height 
 * @param weight 
 * @param age 
 * @param date 
 * @param insurance 
 * @param shot 
 * @return patient* 
 */
patient *create_patientid(patient *start, 
                int id, 
                char *firstname, 
                char *lastname,
                char *aadhar_num,
                float height,
                float weight,
                int age,
                char *date,
                insured insurance,
                vaccine shot)
{

    patient *new_box;
    new_box = (patient *)malloc(sizeof(patient));

    new_box->uniq_id = id;
    strcpy(new_box->firstname, firstname);
    strcpy(new_box->lastname, lastname);
    strcpy(new_box->aadhar_num, aadhar_num);
    new_box-> height = height;
    new_box->weight = weight;
    new_box->age = age;
    strcpy(new_box ->date_of_vaccine, date);
    new_box->insurance = insurance;
    new_box->shot = shot;
    new_box->next = NULL;

    if(start == NULL){
        start = new_box;
    
        return start;
    }
    else{
        
        insert_patientrecords(start,id,firstname,lastname,aadhar_num,height,weight,age,date,insurance,shot);
        free(new_box);
        return start;
    }


}