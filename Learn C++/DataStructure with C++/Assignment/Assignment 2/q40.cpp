//40 Implement a C++ class representing a basic calculator with functions for addition, subtraction, multiplication, and division.

#include<bits/stdc++.h>
using namespace std;
class simpleCalculator{
    private:
        int Number1, Number2, addition, subtraction, multiplication, division, modulus;
    public:
        void getData(void){
        cout<<"Enter 1st Number"<<endl;
        cin>>Number1;
        cout<<"Enter 2nd Number"<<endl;
        cin>>Number2;
        }
        int Addition(void){
            return (addition=Number1+Number2);
        }

        int Subtraction(void){
            return (subtraction=Number1-Number2);
        }

        int Multiplication(void){
            return (multiplication=Number1*Number2);
        }

        int Division(void){
            return (division=Number1/Number2);
        }

        int Modulus(void){
            return (modulus=Number1%Number2);
        }
        
        void showData(void){
            cout<<"Addition is "<<addition<<endl;
            cout<<"Subtraction is "<<subtraction<<endl;
            cout<<"Multiplication is "<<multiplication<<endl;
            cout<<"Division is "<<division<<endl;
            cout<<"Modulus is " <<modulus<<endl;
        }
};

int main(){
    simpleCalculator try1;
    try1.getData();
    try1.Addition();
    try1.Subtraction();
    try1.Multiplication();
    try1.Division();
    try1.Modulus();
    try1.showData();

    return 0;
}