#include "conv.h"

//Converte de Celcius para fahrenheit
float celcius2fahrenheit(float temp){
    return temp * 1.8 + 32;
}

//Converte de fahrenheit para Celcius
float fahrenheit2celcius(float temp){
    return (temp - 32) / 1.8;
}