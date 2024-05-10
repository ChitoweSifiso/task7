#include<iostream>
#include "Rectangle.cpp"
using namespace std;

int main(){
    int y,z;

    cout<<"to find Area of a rectangle, ";
    
    cout<<"enter length"<<endl;
    cin>>y;

    cout<<"enter width"<<endl;
    cin>>z; 
        
    Rectangle r;
    r.setLength(y);
    r.setWidth(z);
    cout<<"Area of the rectangle is: "<<r.getArea()<<endl;

    
    return 0;
}