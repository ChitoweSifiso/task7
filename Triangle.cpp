#pragma once

#include "Triangle.h"

using namespace std;

Triangle::Triangle(){base=height=0;}

Triangle::Triangle(const float newBase, const float newHeight){
    base=newBase;
    height = newHeight;
}

Triangle::~Triangle(){}


void Triangle::setBase(float b){
    base = b;
}

void Triangle::setHeight(float h){
    height = h;
}

float Triangle::getArea(){
    return base * height;
}

Triangle Triangle::operator+(const Triangle& t){
      Triangle triangle;

            triangle.base = this->base + t.base;
            triangle.height =this->height + t.height;
            return triangle;
}