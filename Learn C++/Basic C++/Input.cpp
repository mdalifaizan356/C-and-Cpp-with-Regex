//The ">>" operato  r is known as an insertion operator in C++.   

// //Q1 Basic input from user
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int number;
//     cout<<"Enter any number";
//     cin>>number;
//     cout<<"You enter this number"<<number;

//     return 0;
// }

// //Q2 Addition of 2 numbers
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num1, num2;
//     cout<<"Enter 2 number for addition";
//     cin>>num1>>num2;
//     cout<<"Addition is\t"<<num1+num2;

//     return 0;
// }


//Q3 swaping of 2 numbers with 3rd variable
#include<bits/stdc++.h>
using namespace std;
int main(){
    int var1, var2, var3=0;
    cout<<"Enter first value";
    cin>>var1;
    cout<<"Enter second value";
    cin>>var2;

    var3=var1;
    var1=var2;
    var2=var3;
    cout<<"Your first value after swap\t"<<var1<<endl;
    cout<<"Your second value after swap\t"<<var2;

    return 0;
}
