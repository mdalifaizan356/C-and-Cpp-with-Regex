#include<bits/stdc++.h>
using namespace std;
int main(){
    int size, i,searchElement=-1,flag=0, index=-1;
    cout<<"Enter size of array ";
    cin>>size;
    int myarray[size];
    cout<<"Enter "<<size<<" element\n";
    for(i=0; i<size; i++){
        cin>>myarray[i];
    }
    cout<<"You enter this element\n";
    for(i=0; i<size; i++){
        cout<<myarray[i]<<"\t";
    }
    return 0;
}