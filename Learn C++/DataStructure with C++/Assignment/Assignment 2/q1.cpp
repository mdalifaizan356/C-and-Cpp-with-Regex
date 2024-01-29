//1 Write a C++ program to check if a number is positive, negative, or zero.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number to check number is positive, negative, or zero"<<endl;
    cin>>number;
    if(number>0){
        cout<<"Number is positive";
    }
    else if(number==0){
        cout<<"Number is equal to 0";
    }
    else{
        cout<<"Number is negative";
    }
    return 0;
}