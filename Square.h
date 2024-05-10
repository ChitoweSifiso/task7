#pragma once
// specification file
// class declaration goes here
#include<iostream>
using namespace std;


class Square{
    private:
        float length;

    public:
        Square();
        Square(const float newLength);
        ~Square();

        void setLength(float l);

        float getArea();

        Square operator+(const Square& s);
};