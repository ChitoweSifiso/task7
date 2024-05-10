#pragma once
#include "Circle.h"
#include "Circle.cpp"
#include "Square.h"
#include "Square.cpp"
#include "Triangle.h"
#include "Triangle.cpp"
using namespace std;

class Area{
    public:
    float radius;
    float length;
    float base;
    float height;


    float getArea(){
    return radius * radius*(22/7);
}

float getArea(){
    return length * length;
}

float getArea(){
    return base * height;
}


};