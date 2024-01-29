/*
Array: Array is a linear collaction of similer elements.
Array container in STL provides us the implementation of static array
Use header array   #include<array>
Its object create this formate: array<int(type of elements), number(size of array)>array_name;
and this formate create an empty array of object_type with maximum size of array_size.
Member functions of array class.
        at, []operator, front(), back(), fill(), swap(), size(), begin(), end(), etc.. 
*/

// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     array<int, 6>data_array={11,22,33,44,55}; //object with initialization.
//     cout<<data_array.at(2)<<endl;
//     cout<<data_array[3]<<endl;
//     cout<<data_array.front()<<endl;
//     cout<<data_array.back()<<endl;
//     data_array.fill(10);
//     for(int i=0; i<=6; i++){
//         cout<<data_array[i]<<"\t";
//     }
// return 0;
// }

/*
swap(): This method swaps the content of two arrays of same type and same size
        It swaps index wise, thus element of index i of first array will be swapped with the
        element of index i of the second array.
    syntax: first_array.swap(second_array);
*/
#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int, 5>data_array1={11,22,33,44,55}; //object with initialization.
    array<int, 5>data_array2={55,44,33,22,11}; //object with initialization.
    cout<<"size is data_array1 "<<data_array1.size()<<endl;
    cout<<"size is data_array2 "<<data_array2.size()<<endl;
    
    data_array1.swap(data_array2);
    cout<<"swaped array 1\n";
    for(int i=0; i<5; i++){
        cout<<data_array1[i]<<"\t";
    }
    cout<<"\nswaped array 2\n";
    for(int i=0; i<5; i++){
        cout<<data_array2[i]<<"\t";
    }
return 0;
}