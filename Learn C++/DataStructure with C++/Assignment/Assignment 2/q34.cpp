//34 Write a C++ program to find the sum of digits of a number using a for loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number, sum=0, i;
    cout<<"Enter number";
    cin>>number;
    for(i=0; i<=number; i++){
        sum=sum+i;
    }
    cout<<"Sum of all digits of your nummber "<<sum<<endl;
    return 0;
}
