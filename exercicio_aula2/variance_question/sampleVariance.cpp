#include <stdlib.h>
#include <cmath>
#include "arithmetic_mean.h"

float sampleVariance(int total_elements, char *elements[]){
    /*
    Variance is: ( (x1-x)² + (x2-x)² + (x3-x)² + (xn-x)² ) / (n)
    where: 
    n is the numbers of elements;
    x is the arithmetic value of elements;
    */
    float dividend = 0;
    // The divisor is the sum of the elements less 1
    float divider = total_elements - 1;
    //Function that calculates the arithmetic mean of the elements
    float arithmetic_value = arithmeticMean(total_elements, elements);

    for (int i = 0; i < total_elements; i++)
    {
        float subtraction = atoi(elements[i]) - arithmetic_value;
        dividend += pow(subtraction, 2.0);
    }
    return (dividend/(divider));
}