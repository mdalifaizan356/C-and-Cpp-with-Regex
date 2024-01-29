/* Problem 1: Find the Index Given an array of integers, write a function to find the index of a specific element in the array
using linear search. If the element is not found, return -1.
*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Function for find index of specific element
    int findIndex(int key, int myarray[], int &numofele){
    int flag, index=-1,i;
    for(i=0; i<numofele; i++){
        if(key==myarray[i]){
            flag=1;
            index=i;
            break;
        }
    }
    if(flag==1){
        return index;
    }
    else{
        return -1;
    }
}

// Main Function
int main(){
    int numofele, key,i, returnValue;
    cout<<"Enter number of total element\n";
    cin>>numofele;
    int myarray[numofele];
    cout<<"Enter "<<numofele<<" Element\n";
    for(i=0; i<numofele; i++){
        cin>>myarray[i];
    }
    cout<<"Enter number which index you find ";
    cin>>key;
    findIndex(key,myarray,numofele);
    returnValue=findIndex(key,myarray,numofele);
    if(returnValue==1){
        cout<<key<<" is found on index numnber"<<returnValue;
    }
    else{
        cout<<"Element not found";
    }

return 0;
}
