#pragma once
// specification file
// class declaration goes here
#include<iostream>
using namespace std;


class Triangle{
    private:
        float base;
        float height;

    public:
        Triangle();
        Triangle(const float newBase, const float newHeight);
        ~Triangle();

        void setBase(float b);
        void setHeight(float h);

        float getArea();

        Triangle operator+(const Triangle& t);
};