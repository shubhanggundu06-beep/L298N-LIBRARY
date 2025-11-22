#ifndef MOVEMENTS_H
#define MOVEMENTS_H

class move {
private:
    int ena, in1, in2, enb, in3, in4;
    int Speed;   // speed variable stored in class

public:
    move(int ena, int in1, int in2, int enb, int in3, int in4);

    void speed(int Speed);
    void forward();
    void backward();
    void left();
    void right();
    void stop();
};

#endif
