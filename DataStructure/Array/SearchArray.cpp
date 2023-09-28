// // Lenear Search
//      // Ye unsorted array me bhi kaam kar jata he 
//      // Agar element last position pr he tb ye time zyada leta he

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int size, i,searchElement=-1,flag=0, index=-1;
//     cout<<"Enter size of array ";
//     cin>>size;
//     int myarray[size];
//     cout<<"Enter "<<size<<" element\n";
//     for(i=0; i<size; i++){
//         cin>>myarray[i];
//     }
//     cout<<"You enter this element\n";
//     for(i=0; i<size; i++){
//         cout<<myarray[i]<<"\t";
//     }
//     cout<<"\nEnter element which you search from this Array";
//     cin>>searchElement;

//     for(i=0; i<size; i++){
//         if(myarray[i]==searchElement){
//             flag=1;
//             index=i;
//             break;
//         }

//     }
//     if(flag==1){
//         cout<<"Element "<<searchElement<<" is found\n";
//         cout<<"Search element index number is "<<index;

//     }
//     else{
//         cout<<"Element "<<searchElement<<" not found";
//     }
//     return 0;
// }


// // Lenear Search with vector
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     return 0;
// }




// Binary Search (Divide and concure algo)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size, i,searchElement=-1,flag=0, index=-1;
    cout<<"Enter size of array ";
    cin>>size;
    int myarray[size];
    cout<<"Enter "<<size<<" element in accending form\n";
    for(i=0; i<size; i++){
        cin>>myarray[i];
    }
    cout<<"You enter this element\n";
    for(i=0; i<size; i++){
        cout<<myarray[i]<<"\t";
    }
    cout<<"\nEnter element which you search from this Array";
    cin>>searchElement;

    for(i=0; i<size; i++){
        if(myarray[i]==searchElement){
            flag=1;
            index=i;
            break;
        }

    }
    if(flag==1){
        cout<<"Element "<<searchElement<<" is found\n";
        cout<<"Search element index number is "<<index;

    }
    else{
        cout<<"Element "<<searchElement<<" not found";
    }
    return 0;
}