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
push_back(): it is a member function, which can be used to add value to the vector at the end.

*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v0{2,3,4,5};                 //Initialize value during declaration
//     vector<int>v1;                         //create a blank vector
//     vector<int>v2(4);                     //create a vector with size
//     vector<string>v3{"Faizan","Pasha"};  //Initialize during declaration
//     vector<int>v4(5,10);      //Initialize same value in all block during declaration with size
//     for(int i=0; i<4; i++){
//     cout<<v4[0]<<endl;
//     }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1;
    cout<<v1.capacity()<<endl;  //Now capacity is 0;
    v1.push_back(10);
    cout<<v1.capacity()<<endl;  //Now capcity is 1;
    v1.push_back(20);
    cout<<v1.capacity()<<endl;  //Now capcity is 2;
    v1.push_back(30);
    cout<<v1.capacity()<<endl;  //Now capcity is 4;

    v1.pop_back();
    cout<<v1.capacity()<<endl;  //Now capcity is 1;
    
return 0;
}