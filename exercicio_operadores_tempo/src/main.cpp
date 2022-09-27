#include <iostream>
#include "tempo.h"
using std::cout;
using std::cin;
using std::endl;
/*
Implemente e teste a classe Tempo, como discutido na aula.
*/
int main(void){
    short hour, minutes, seconds;
    short hour2, minutes2, seconds2;
    cout << "Digite a hora, minutos e segundos: " << endl;
    cin >> hour >> minutes >> seconds;
    Tempo t(hour, minutes, seconds);
    cout << "Digite a hora, minutos e segundos que serão somados: " << endl;
    cin >> hour2 >> minutes2 >> seconds2;
    Tempo t2(hour2, minutes2, seconds2);
    Tempo t3 = t+t2;
    cout << t3.getHour() << ":" << t3.getMinutes() << ":" << t3.getSeconds() << endl;
    return 0;
}