// 31 Write a program to print the Fibonacci series up to a given number using a for loop.
#include<bits/stdc++.h>
using namespace std;
int main(){

  int number,i;
  int t1 = 0, t2 = 1;
  int next= t1 + t2;
  cout<<"Enter the number for series";
  cin>>number;
  cout<<"Fibonacci Series "<<t1<<"\t"<<t2<<"\t";
  for (i = 3; i <= number; i++) {
    cout<<next<<"\t";
    t1 = t2;
    t2 = next;
    next = t1 + t2;
  }
  return 0;
}