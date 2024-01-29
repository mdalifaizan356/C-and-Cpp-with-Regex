// 25 Create a C++ program that calculates the Fibonacci series using a while loop.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int number,i=3;
    int t1 = 0, t2 = 1;
    int next= t1 + t2;
    cout<<"Enter the number for series";
    cin>>number;
    cout<<"Fibonacci Series "<<t1<<"\t"<<t2<<"\t";
    while(i <= number) {
        cout<<next<<"\t";
        t1 = t2;
        t2 = next;
        next = t1 + t2;
        i++;
    }
    return 0;
}
