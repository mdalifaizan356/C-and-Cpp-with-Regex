//4 Create a program that calculates the area of a triangle based on user input of its base and height.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int base, height, area=0;
    cout<<"Enter base  and height for calculate the area of triangle"<<endl;
    cin>>base>>height;
    area=(base*height)/2;
    cout<<"Area of triangle is "<<area;
    return 0;
}