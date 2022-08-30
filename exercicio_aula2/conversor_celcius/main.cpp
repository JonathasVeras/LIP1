#include <iostream>
#include "conv.h"

using std::cin;
using std::cout;
using std::endl;


int main(void){
    int opcao;

    cout << "Conversor de temperatura" << endl;
    cout << "(1) Celsius -> Fahrenheit" << endl;
    cout << "(2) Fahrenheit -> Celsius" << endl;
    cout << "Digite sua opcao: " << endl;
    cin >> opcao;

    float temp;
    cout << "Digite a temperatura: ";
    cin >> temp;
    float conv;

    switch(opcao){
        case 1:
            conv = celcius2fahrenheit(temp);
            cout << temp << "C = " << conv << "F" << endl;
            break;
        case 2:
            conv = fahrenheit2celcius(temp);
            cout << temp << "F = " << conv << "C" << endl;
            break;
        default:
            cout << "Opcao invalida" << endl;
    }
    return 0;
}