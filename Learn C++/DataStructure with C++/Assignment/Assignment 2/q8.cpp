//8 Write a C++ program to find the minimum of three numbers using if-else statements.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, num3;
	cout<<"Enter three numbers:\n";
	cin>>num1>>num2>>num3;
	if(num1 < num3){
        if(num1 < num2){
            cout<<num1<<" is smallest\n";
        }
        else{
            cout<<num2<<" is smallest\n";
        }
    }
    else if((num2 < num3)){
        cout<<num2<<" is smallest\n";
    }
    else{
        cout<<num3<<" is smallest\n";
    }
    return 0;
}
            