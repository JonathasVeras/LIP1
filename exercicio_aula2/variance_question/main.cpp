#include <iostream>
#include "variance.h"
#include <stdlib.h>

using std::cout;
using std::endl;

int main(int argc, char *argv[]){

    //Calculates the sample variance with the data passed by argv
    float varianceValue = sampleVariance(atoi(argv[1]), argv+2);

    cout << "The sample variance is: " << varianceValue << endl;
    return 0;
}