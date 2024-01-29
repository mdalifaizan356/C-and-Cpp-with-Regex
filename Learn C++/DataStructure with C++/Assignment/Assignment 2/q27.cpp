//27 Write a program to print the even numbers from 1 to 20 using a for loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Even number from 1 to 20"<<endl;
    for(number=-1; number<=20; number++){
        if(number%2==0){
            cout<<number<<endl;
        }
    }
    return 0;
}