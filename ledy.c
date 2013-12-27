#include <stdio.h>
#include <wiringPi.h>
int main (void)
{
    printf("migi\n");
    if (wiringPiSetup()==-1)
    return 1;
    pinMode(0,OUTPUT);
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    
    while(1)
    {
            digitalWrite(0,1);
            delay(100);
            digitalWrite(0,0);
            delay(100);
            digitalWrite(0,1);
            delay(100);
            digitalWrite(0,0);
            delay(100);
            digitalWrite(1,1);
            delay(100);
            digitalWrite(1,0);
            delay(100);
            digitalWrite(1,1);
            delay(100);
            digitalWrite(1,0);
            delay(100);
            digitalWrite(2,1);
            delay(100);
            digitalWrite(2,0);
            delay(100);
            digitalWrite(2,1);
            delay(100);
            digitalWrite(2,0);
            delay(100);
            digitalWrite(3,1);
            delay(100);
            digitalWrite(3,0);
            delay(100);
            digitalWrite(3,1);
            delay(100);
            digitalWrite(3,0);
            delay(100);
            digitalWrite(4,1);
            delay(100);
            digitalWrite(4,0);
            delay(100);
            digitalWrite(4,1);
            delay(100);
            digitalWrite(4,0);
            delay(100);
            digitalWrite(5,1);
            delay(100);
            digitalWrite(5,0);
            delay(100);
            digitalWrite(5,1);
            delay(100);
            digitalWrite(5,0);
            delay(100);
            digitalWrite(6,1);
            delay(100);
            digitalWrite(6,0);
            delay(100);
            digitalWrite(6,1);
            delay(100);
            digitalWrite(6,0);
            delay(100);

    }
