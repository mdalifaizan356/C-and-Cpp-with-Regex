/*
Problem 5: First Occurrence Find the index of the first occurrence of a given 
element in an array using linear search.
*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int numofele, key,i, flag=0, index=-1;
    cout<<"Enter number of total element\n";
    cin>>numofele;
    int myarray[numofele];
    cout<<"Enter "<<numofele<<" Element\n";
    for(i=0; i<numofele; i++){
        cin>>myarray[i];
    }
    cout<<"Enter element for the check its first occurness";
    cin>>key;
    for(i=0; i<numofele; i++){
        if(key==myarray[i]){
            flag=1;
            index=i;
            break;
        }
    }
    if(flag==1){
        cout<<"First occurnance of "<<key<<" is index number of "<<index;
    }
    else{
        cout<<"Element is Not Found";
    }
    
    return 0;
}
