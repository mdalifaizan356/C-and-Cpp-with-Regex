// 23 Create a program that reverses a given number using a while loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number,reverse;
    cout<<"Enter number";
    cin>>number;
    while(number>0){
        reverse=number%10;
        cout<<reverse;
        number=number/10;
    }
    return 0;
}