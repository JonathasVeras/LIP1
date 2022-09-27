#include <iostream>
#include "tempo.h"

Tempo::Tempo(short h, short m, short s): hour(h), minutes(m), seconds(s) {}

Tempo::Tempo(){
    hour = 0;
    seconds = 0;
    minutes = 0;
}

Tempo Tempo::operator+(Tempo &t){
    short h=0;
    short m=0;
    short s = seconds + t.seconds;
    if(s > 60){
        s = s - 60;
        m++;
    }
    m += minutes + t.minutes;

    if(m >= 60){m=m-60; h++;}

    h += hour + t.hour;
    
    return Tempo(h, m, s);
}