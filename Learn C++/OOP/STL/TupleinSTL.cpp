/*
Tuple: Just like in pair, we can pair two heterogeneous objects, in tuple we can pair multiple
       objects
       Syntax: tuple<T1, T2, T3>obj_name;
       Inserting Value: obj_name=make_tuple("india",16,10);
       
*/ 

#include<bits/stdc++.h>
using namespace std;
int main(){
       tuple<string, int , int>t1;
       t1=make_tuple("faizan",6,6);
       cout<<get<0>(t1);
       cout<<get<1>(t1);
       cout<<get<2>(t1);
       // for(int i=0; i<3; i++){
       //        cout<<get<i>(t1);
       // }
return 0;
}