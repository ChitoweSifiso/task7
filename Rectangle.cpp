#pragma once

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(){length=width=0;}

Rectangle::Rectangle(const float newLength, const float newWidth){
    length=newLength;
    width = newWidth;
}

Rectangle::~Rectangle(){}


void Rectangle::setLength(float l){
    length = l;
}

void Rectangle::setWidth(float w){
    width = w;
}

float Rectangle::getArea(){
    return length * width;
}

Rectangle Rectangle::operator+(const Rectangle& r){
      Rectangle rectangle;

            rectangle.length = this->length + r.length;
            rectangle.width =this->width + r.width;
            return rectangle;
}