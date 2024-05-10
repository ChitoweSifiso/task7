#include<iostream>
#include "Circle.cpp"
#include "Square.cpp"
#include "Triangle.cpp"
using namespace std;

int main(){
    int w,x,y,z;

    cout<<"1.Calculate Area of a square, ";
    cout<<"2.Calculate Area of a triangle, ";
    cout<<"3.Calculate Area of a circle, ";
    cout<<"4.Quit";
    cin>>w;

    if(w=1){
        Square s;
        s.setLength(x);
        cout<<"Area of the square is: "<<s.getArea()<<endl;
    }

    else if(w=2){
        Triangle t;
        t.setBase(x);
        t.setHeight(y);
        cout<<"Area of the triangle is: "<<t.getArea()<<endl;
    }

    else if(w=3){
        Circle c ;
        c.setRadius(x);
        cout<<"Area of the circle is: "<<c.getArea()<<endl;
    }
    
    else if(w=4){
        return 0;
    }

    else{
        cout<<" not on option list: ";
    }
    
    return 0;
}