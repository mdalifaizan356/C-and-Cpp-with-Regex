//7 Write a C++ program to find the largest of four numbers using nested if-else statements

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3,num4,largest;
    cout<<"\n Enter value four number to find largest number ";
    cin>>num1,num2,num3,num4;
    if (num1 >num2)
    {
        if(num1>num3)
        {
            if(num1>num4)
            largest = num1;
            else
            largest=num4;
        }
        else
           {
           if(num3>num4)
            largest=num3;
            else
            largest = num4;
        }
        else
            if(num2>num3)
            {
                if(num2>d)
                largest = b;
                else
                largest = d;
            }
    }
    cout<<"\n"<<largest<<"Is largest number";
    return 0;
}