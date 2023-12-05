/* Problem 4: Minimum Element Find the minimum element in an array using linear search. Return both the minimum
element and its index.
*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int numofele, key,i, min=0, index=-1,max=0;
    cout<<"Enter number of total element\n";
    cin>>numofele;
    int myarray[numofele];
    cout<<"Enter "<<numofele<<" Element\n";
    for(i=0; i<numofele; i++){
        cin>>myarray[i];
    }

    for(i=0; i<numofele; i++){
        if(max<myarray[i]){
            max=myarray[i];
            index=i;

        }
    }
    for(i=0; i<numofele; i++){
        if(max<myarray[i]){
            min=myarray[i];
            index=i;

        }
    }
    cout<<"\n"<< min <<" is minimum element in array";
    cout<<"\n"<< min <<" is store in "<< index <<" number index";
    return 0;
}
