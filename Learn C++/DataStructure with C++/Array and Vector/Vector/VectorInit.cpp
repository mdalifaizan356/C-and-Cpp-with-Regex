#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>myvector;
    vector<int>myvector2;
    
    // myvector.push_back(4);
    // cout<<myvector[1];

    for(auto it:myvector){
        myvector.push_back(it);
    }
    for(auto it:myvector){
        cout<<myvector[it]<<"\n";
    }
    return 0;
}