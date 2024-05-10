#pragma once

#include "Square.h"

using namespace std;

Square::Square(){length=0;}

Square::Square(const float newLength){
    length=newLength;
}

Square::~Square(){}


void Square::setLength(float l){
    length = l;
}


float Square::getArea(){
    return length * length;
}

Square Square::operator+(const Square& s){
      Square square;

            square.length = this->length + s.length;
            return square;
}