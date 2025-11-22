#include "movements.h"
#include <Arduino.h>
move::move(int ena, int in1, int in2, int enb, int in3, int in4) {
this->ena = ena;
this->in1 = in1;
this->in2 = in2;
this->enb = enb;
this->in3 = in3;
this->in4 = in4;

    pinMode(ena, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(enb, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
 }
void move::speed(int Speed) {
    this->Speed = Speed;
    analogWrite(ena, Speed);
    analogWrite(enb, Speed);
}
    void move :: forward () {
        analogWrite(ena, Speed);
        analogWrite(enb, Speed);
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
    }
    void move :: backward () {
        analogWrite(ena, Speed);
        analogWrite(enb, Speed);
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
    }
    void move :: left () {
        analogWrite(ena, Speed);
        analogWrite(enb, Speed);
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
    }
    void move :: right () {
        analogWrite(ena, Speed);                
        analogWrite(enb, Speed);
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
    }
    void move :: stop () {
        digitalWrite(in1, LOW);             
        digitalWrite(in2, LOW);     
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
    }