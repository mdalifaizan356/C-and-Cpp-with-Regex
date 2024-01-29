// 24 Create a program that counts the number of digits in an integer using a while loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number, count=0;
    cout<<"Enter number";
    cin>>number;
    while(number!=0){
        number=number/10;
        count++;
    }
    cout<<count;
    return 0;
}