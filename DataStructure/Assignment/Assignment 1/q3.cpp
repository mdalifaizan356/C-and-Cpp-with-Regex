/*Problem 3: Maximum Element Find the maximum element in an array using linear search. Return both the maximum
element and its index.
*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int numofele, key,i, max=0, index=-1;
    cout<<"Enter number of total element\n";
    cin>>numofele;
    int myarray[numofele];
    cout<<"Enter "<<numofele<<" Element\n";
    for(i=0; i<numofele; i++){
        cin>>myarray[i];
    }

    cout<<"Enter number which are you find it's index";
    cin>>key;

    for(i=0; i<numofele; i++){
        if(key<myarray[i]){
            key=myarray[i];
            index=i;
        }
    }
    cout<<"\n"<< key <<" is maximum element in array";
    cout<<"\n"<< key <<" is store in "<< index <<" number index";
    return 0;
}
