#include "arithmetic_mean.h"
#include <stdlib.h>
#include <iostream>
using std::cout;

float arithmeticMean(int total_elements, char *argv[]){
    float total = 0;
    for (int i = 0; i < total_elements; i++)
    {
        cout << "element:" << atoi(argv[i]) << std::endl;
        total += atoi(argv[i]);
    }
    cout << "arithmetic value: " <<((total) / (total_elements)) << std::endl;
    return ((total) / (total_elements));
}

