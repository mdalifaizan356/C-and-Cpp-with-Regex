//28 Write a C++ program to print the sum of numbers from 1 to 50 using a for loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number, sum=0;
    for(number=1; number<=50; number++){
        sum=sum+number;
    }
    cout<<"sum of 1 to 50 numbers "<<sum;
    return 0;
}