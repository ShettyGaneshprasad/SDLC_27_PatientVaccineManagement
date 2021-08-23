#include "prototypes.h"
// Vysyaraju Srikar To Create a function that will store nothing more than patient ids to avoid redundant entry.
error_t indexFile(char *filename, char *mode, FILE* *fptr)
{
     *fptr = fopen(filename, mode);    fopen
     if(*fptr == NULL)
     {
        *fptr = fopen(filename, "wb+");      fopen
     }
     return SUCCESS;
}