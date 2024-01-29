/*
Problem 6: Last Occurrence Find the index of the last occurrence of a given 
element in an array using linear search.
*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int numofele, key,i, flag=0;
    cout<<"Enter number of total element\n";
    cin>>numofele;
    int myarray[numofele];
    cout<<"Enter "<<numofele<<" Element\n"; 
    for(i=0; i<numofele; i++){
        cin>>myarray[i];
    }
    cout<<"Enter which number you want find ";
    cin>>key;
    for(i=0; i<numofele; i++){
        if(key==myarray[i]){
            flag=1;
            break;
        }
    }
    return 0;
}
