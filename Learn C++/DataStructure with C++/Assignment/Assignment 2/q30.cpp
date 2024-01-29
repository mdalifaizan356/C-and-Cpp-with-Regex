//  30 Write a C++ program to calculate the factorial of a number using a for loop.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int number, fact=1,i;
    cout<<"Enter number";
    cin>>number;
    for(i=1; i<=number; i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
