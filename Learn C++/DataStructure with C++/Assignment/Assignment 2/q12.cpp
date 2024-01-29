//12 Age Classifier: Write a program that takes a person's age as input and classifies them as an infant, child, teenager, adult, or senior.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age";
    cin>>age;
    if(age<=1){
        cout<<"You are Baby or infant";
    }
    else if(age<=11){
        cout<<"You are Child";
    }
    else if(age<=19){
        cout<<"You are Teenager";
    }
    else if(age<=45){
        cout<<"You are Adult";
    }
    else{
        cout<<"You are Senior";
    }
    return 0;
}