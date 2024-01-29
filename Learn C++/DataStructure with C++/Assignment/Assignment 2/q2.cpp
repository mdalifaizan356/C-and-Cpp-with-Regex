//2 Create a program that determines whether a given integer is even or odd.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number to check number is even or odd"<<endl;
    cin>>number;
    if(number%2==0){
        cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
    return 0;
}