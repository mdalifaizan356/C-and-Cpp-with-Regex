/*
Class Template also known as generic class.
*/

// Class without Template
// #include<bits/stdc++.h>
// using namespace std;
// class Arrlist{
//     private:
//         struct ControlBlock
//         {
//             int capacity;
//             int *arr_ptr;
//         };
//         ControlBlock *s;
//     public:
//         Arrlist(int capacity){
//             s=new ControlBlock;
//             s->capacity=capacity;
//             s->arr_ptr=new int[s->capacity];
//         }
//         void addElement(int index, int data){
//             if(index>=0&&index<=s->capacity-1){
//                 s->arr_ptr[index]=data;
//             }
//             else{
//                 cout<<"Array Index is not valid";
//             }
//         }
//         void viewElement(int index, int &data){
//             if(index>=0&&index<=s->capacity-1){
//                 s->arr_ptr[index];
//             }
//             else{
//                 cout<<"Array Index is not valid";
//             }
//         }
//         void viewList(){
//             int i;
//             for(i=0; i<s->capacity; i++){
//                 cout<<" "<<s->arr_ptr[i];
//             }
//         }      
// };
// int main(){
//     int data;
//     Arrlist list1(4);
//     list1.addElement(0,23);
//     list1.viewElement(0,data);
//     cout<<"Value the array is"<<data<<"\n";
//         list1.viewList();


// return 0;
// }

// Class Template
#include<bits/stdc++.h>
using namespace std;
template <class x> class Arrlist{
    private:
        struct ControlBlock
        {
            int capacity;
            x *arr_ptr;
        };
        ControlBlock *s;
    public:
        Arrlist(int capacity){
            s=new ControlBlock;
            s->capacity=capacity;
            s->arr_ptr=new x[s->capacity];
        }
        void addElement(int index, x data){
            if(index>=0&&index<=s->capacity-1){
                s->arr_ptr[index]=data;
            }
            else{
                cout<<"Array Index is not valid";
            }
        }
        void viewElement(int index, x &data){
            if(index>=0&&index<=s->capacity-1){
                s->arr_ptr[index];
            }
            else{
                cout<<"Array Index is not valid";
            }
        }
        void viewList(){
            int i;
            for(i=0; i<s->capacity; i++){
                cout<<" "<<s->arr_ptr[i];
            }
        }      
};
int main(){
    int data;
    Arrlist <int> list1(4);
    list1.addElement(0,23);
    list1.addElement(0,23);
    list1.addElement(0,23);
    //list1.viewElement(0,data);
    //cout<<"Value the array is"<<data<<"\n";
        list1.viewList();
return 0;
}