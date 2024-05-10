#pragma once

#include "Circle.h"

using namespace std;

Circle::Circle(){radius=0;}

Circle::Circle(const float newRadius){
    radius=newRadius;
}

Circle::~Circle(){}


void Circle::setRadius(float r){
    radius = r;
}


float Circle::getArea(){
    return radius * radius*(22/7);
}

Circle Circle::operator+(const Circle& c){
      Circle circle;

            circle.radius = this->radius + c.radius;
            return circle;
    
            
}