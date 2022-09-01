#include "arithmetic_mean.h"
#include <stdlib.h>


float arithmeticMean(int argc, char *argv[]){
    float total = 0;
    for (int i = 1; i < argc; i++)
    {
        total += atoi(argv[i]);
    }
    
    return ((total) / (argc-1.0));
}

