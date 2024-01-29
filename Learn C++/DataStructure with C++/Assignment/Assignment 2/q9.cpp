//9 Grading System:Create a program that takes a student's score as input and assigns a letter grade (A, B, C, D, or F) based on the score.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int score;
    cout<<"Enter Your Marks: ";
    cin>>score;
    if (score >= 90){
        cout<<"Your Grade is A+";
    }
    else if (score >= 80){
        cout<<"Your Grade is A";
    }
    else if (score >= 70){
        cout<<"Your Grade is B+";
    }
    else if (score >= 60){
        cout<<"Your Grade is B";
    }
    else if (score >= 50){
        cout<<"Your Grade is C";
    }
    else if (score >= 40){
        cout<<"Your Grade is D";
    }
    else if (score >= 30){
        cout<<"Your Grade is E";
    }
    else if (score <= 30){
        cout<<"Your Grade is F";
    }
    else{
        cout<<"Enter Valid Marks";
    }
    return 0;
}