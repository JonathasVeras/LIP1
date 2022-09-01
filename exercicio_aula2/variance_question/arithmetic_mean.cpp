#include "arithmetic_mean.h"
#include <stdlib.h>

float arithmeticMean(int total_elements, char *argv[]){
    float total = 0;
    for (int i = 0; i < total_elements; i++)
    {
        total += atoi(argv[i]);
    }
    return ((total) / (total_elements));
}

