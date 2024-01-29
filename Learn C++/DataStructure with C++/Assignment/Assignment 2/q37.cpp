// 37 Write a C++ program to find the sum of all even numbers between 1 and 100.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number,sum=0;
    cout<<"Even number from 1 to 20"<<endl;
    for(number=-1; number<=100; number++){
        if(number%2==0){
            sum=sum+number;
        }
    }
    cout<<"Sum of all (1 to 100) even number "<<sum<<endl;
    return 0;
}