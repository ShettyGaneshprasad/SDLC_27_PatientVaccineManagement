/**
 * @file display_patientid.c
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
 * @brief Display patient details
 * 
 * @param start 
 * @return error_t 
 */
error_t display_patientid(patient *start)
{
    patient *ptr;
    ptr = start;

    if (start == NULL)
    {
        return NO_HEAD_EXIST;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("Details about box id: %d\n", ptr->uniq_id);
            printf("firstname: %s\n", ptr->firstname);
            printf("lastname: %s\n", ptr->lastname);
            printf("Age of pateint: %d\n", ptr->age);
            printf("Aadhar Card Number: %s\n", ptr->aadhar_num);
            printf("Height of Patient: %f\n", ptr->height);
            printf("Weight of Patient: %f\n", ptr->weight);
            printf("Insurance status: %s\n", (ptr->insurance == 1) ? "Insured" : "Not Insured");
            char vaccine[10];
            switch (ptr->shot)
            {
            case 1:
                strcpy(vaccine, "Covis");
                break;
            case 2:
                strcpy(vaccine, "Covaxin");
                break;
            case 3:
                strcpy(vaccine, "Sputnik");
                break;
            default:
                strcpy(vaccine, "Died");
            }
            printf("Vaccine shot take %s with code %d\n", vaccine, ptr->shot);

            printf("****************************\n");
            ptr = ptr->next;
        }
        return SUCCESS;
    }
}