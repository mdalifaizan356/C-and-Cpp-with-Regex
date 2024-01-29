// 21 Create a program that calculates the sum of all even numbers from 1 to 100 using a while loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number=0,sum=0;
    while(number<=100){
        if(number%2==0){
            sum=sum+number;
        }
        number++;
    }
    cout<<"Sum of all (1 to 100) even number "<<sum<<endl;
    return 0;
}