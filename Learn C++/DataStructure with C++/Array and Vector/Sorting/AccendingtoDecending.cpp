#include<bits\stdc++.h>
using namespace std;
int main(){
    int size, i, j, temp=0;
    cout<<"Enter Array Size";
    cin>>size;
    int arr[size];
    cout<<"Enter Array Element";
    for(i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"\nElement before sorting";
    for(i=0; i<size; i++){
        cout<<"\t"<<arr[i];
    }
    //Sorting Algo
    for(i=0; i<size; i++){
        for(j=0; j<size-1; j++){
            if(arr[j+1]< arr[j]){
                temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"\nElement after sorting";
    for(i=0; i<size; i++){
        cout<<"\t"<<arr[i];
    }
    return 0;
}