#pragma once
// specification file
// class declaration goes here
#include<iostream>
using namespace std;


class Rectangle{
    private:
        float length;
        float width;

    public:
        Rectangle();
        Rectangle(const float newLength, const float newWidth);
        ~Rectangle();

        void setLength(float l);
        void setWidth(float w);

        float getArea();

        Rectangle operator+(const Rectangle& r);
};