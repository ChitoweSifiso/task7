#include<iostream>
using namespace std;

void swapNumbers(int &varA, int &varB){
    int temp;
    temp = varA;
    varA = varB;
    varB = temp;

}

int main(){
    int varA =25;
    int varB = 100;

    cout<<"value varA before swap: "<<varA<<endl; //varA is 25
    cout<<"value varB before swap: "<<varB<<endl; //varA is 100

    swapNumbers(varA, varB);

    cout<<"value varA after swap: "<<varA<<endl; //varA is 100
    cout<<"value varB after swap: "<<varB<<endl; //varA is 25
}