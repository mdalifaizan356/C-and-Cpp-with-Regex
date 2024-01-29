#include<bits\stdc++.h>
using namespace std;

int main(){
    int numofele, i, j, min=0;

    //Get array size
    cout<<"Enter number of total element\n";
    cin>>numofele;
    int myarray[numofele];

    //Get array elements
    cout<<"Enter "<<numofele<<" Element\n";
    for(i=0; i<numofele; i++){
        cin>>myarray[i];
    }

    //Sort array by selection sort
    for(i=0; i < numofele-1; i++){
        min=i;
        for(j=i+1; j<numofele; j++){
            if(myarray[j]<myarray[min]){
                min=j;
            }
        }
    }
    if(min!=i){
        swap(myarray,min,i);
    }

return 0;
}
