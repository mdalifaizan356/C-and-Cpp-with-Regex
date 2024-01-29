/*
The most general purpose containers is the vector
It suppors a dynamic array
Array size is fixed, No flexibility to grow or shrink during execution.

Vector ki length fix nahi hoti he.
Vector can provide memory flexibilty.
Vector apne size ko grow karta he. Ye apni capacity ko double kar k grow karta he.
Vector runtime pr size increase karta he. 
Vector being a dynamic array, doesn't needs size during declaration.

subscript operator[] is also defined for vector.

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1;                         //create a blank vector
    vector<int>v2(4);                     //create a vector with size
    vector<string>v3{"Faizan","Pasha"};  //Initialize during declaration
    vector<int>v4(5,10);      //Initialize same value in all block during declaration with size

return 0;
}