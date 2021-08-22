#include "vaccination.h"

void delete_allpatientrecords(patient *start){

    patient *current;
    current = start;
    patient *ptr;
    while(current != NULL){
        ptr = current->next;
        free(current);
        current = ptr;
    }
    start = NULL;


}

patient *delete_begin(patient *start){
    patient *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}