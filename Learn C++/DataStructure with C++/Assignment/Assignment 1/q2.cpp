/* Problem 2: Count Occurrences Write a function that counts the number of occurrences of a specific element in an array
using linear search.
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int numofele, key,i, count=0;
    cout<<"Enter number of total element\n";
    cin>>numofele;
    int myarray[numofele];
    cout<<"Enter "<<numofele<<" Element\n";
    for(i=0; i<numofele; i++){
        cin>>myarray[i];
    }
    cout<<"Enter which number's occurance you want find ";
    cin>>key;
    for(i=0; i<numofele; i++){
        if(key==myarray[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
