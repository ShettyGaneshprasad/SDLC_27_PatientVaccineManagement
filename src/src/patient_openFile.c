#include "vaccination.h"

error_t patient_openFile(char *filename, char *mode, FILE **fptr){
    *fptr = fopen(filename,mode);
    if(*fptr==NULL){
        *fptr = fopen(filename,"wb+");
    }    
    return SUCCESS;
}