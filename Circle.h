#pragma once
// specification file
// class declaration goes here
#include<iostream>
using namespace std;


class Circle{
    private:
        float radius;

    public:
        Circle();
        Circle(const float newRadius);
        ~Circle();

        void setRadius(float r);

        float getArea();

        Circle operator+(const Circle& c);
};