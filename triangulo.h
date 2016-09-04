#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

#include <iostream>
#include <math.h>

using namespace std;

struct Triangle{
    float x, y, z;

    Triangle(){
        x = y = z = 0;
    }

    Triangle(float x, float y, float z){
        this->x = x;
        this->y = y;
        this->z = z;
    }

    bool isTriangle(){
        // X < Y+Z
        // Y < X+Z
        // Z < Y+X
        return x < y+z && y < x+z && z < x+y;
    }

    int perimetro(){
        return x+y+z;
    }

    double area(){
        double sp = perimetro() / 2;
        return sqrt(sp*(sp - x)*(sp - y)*(sp - z));
    }

    friend ostream& operator<<(ostream& os, Triangle &p){
        os << p.x << p.y << p.z << endl;
        return os;
    }
};

#endif // TRIANGULO_H_INCLUDED
