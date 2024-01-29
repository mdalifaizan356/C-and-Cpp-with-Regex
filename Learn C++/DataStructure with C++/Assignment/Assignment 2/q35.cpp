// 35 Write a program to print the multiplication table of a given number using a for loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number,i, multiply;
    cout<<"Enter number";
    cin>>number;
    for(i=1; i<=10; i++){
        multiply=i*number;
        cout<<number<<" X "<<i<<" = "<<multiply<<"\n";
    }
    return 0;
}