//22 Write a program to find the factorial of a given number using a while loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number, fact=1, i=1;
    cout<<"Enter number for find factorial"<<endl;
    cin>>number;
    while(i<=number){
        fact=fact*i;
        i++;
    }
    cout<<fact;
    return 0;
}