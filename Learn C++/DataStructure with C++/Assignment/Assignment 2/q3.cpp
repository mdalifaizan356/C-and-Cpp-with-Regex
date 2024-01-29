//3 Write a C++ program to find the maximum of three numbers using if-else statements.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter 3 number to find max number"<<endl;
    cin>>num1>>num2>>num3;

    if(num1>=num2 && num1>=num3){
        cout<<"Number "<<num1<<" is max number";
    }
    else if(num2>=num1 && num2>=num3){
        cout<<"Number "<<num2<<" is max number";
    }
    else{
        cout<<"Number "<<num3<<" is max number";
    }

    return 0;
}