/*
Problem 7: Search in a List of Strings Given a list of strings, perform a linear search to find a specific string and return its
index. If the string is not in the list, return -1
*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int numofele,i, flag=0, index=-1;
    cout<<"How many character in your name\n";
    cin>>numofele;
    char myarray[numofele], key;
    cout<<"Enter "<<numofele<<" Element\n";
    for(i=0; i<numofele; i++){
        cin>>myarray[i];
    }

    for(i=0; i<numofele; i++){
        cout<<"\n"<<myarray[i];
    }
        cout<<"\nEnter character for Search and find its index \n";
        cin>>key;

    for(i=0; i<numofele; i++){
        if(key==myarray[i] !='0');
        flag=1;
        index=myarray[i];
        break;
    }

    if(flag==1){
        cout<<key<<" is found on index number "<<index;
    }

    else{
        cout<<"character is not found";
    }
    return 0;
}