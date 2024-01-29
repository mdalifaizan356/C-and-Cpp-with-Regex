//11 Calculator: Implement a simple calculator that performs basic arithmetic operations (+,-, *, /) based on user input.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter two number";
    cin>>num1>>num2;
    cout<<"Addition of your numbers "<<num1+num2<<endl;
    cout<<"Subtraction of your numbers "<<num1-num2<<endl;
    cout<<"Multiplication of your numbers "<<num1*num2<<endl;
    cout<<"Division of your numbers "<<num1/num2<<endl;
    cout<<"Modulus of your numbers "<<num1%num2<<endl;
    return 0;
}

