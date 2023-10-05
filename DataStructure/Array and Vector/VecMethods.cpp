#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>myvector;
    vector<int>myvector2;
    
    myvector.push_back(4);
    myvector.push_back(5);
    cout<<myvector[0]<<"\n";
    cout<<myvector[1]<<"\n";

    myvector.pop_back();
    cout<<myvector[0]<<"\n";
    cout<<myvector[1]<<"\n";
    return 0;
}