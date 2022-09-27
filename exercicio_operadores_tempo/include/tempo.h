#ifndef TEMPO_H
#define TEMPO_H

class Tempo{
    short hour;
    short minutes;
    short seconds;
    public:
        Tempo(short hour, short minutes, short seconds);
        Tempo();
        Tempo operator+(Tempo &t);
        short getHour(){
            return hour;
        }
        short getMinutes(){
            return minutes;
        }
        short getSeconds(){
            return seconds;
        }

};
#endif