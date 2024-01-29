// 29 Create a program that prints the first 10 natural numbers in reverse order using a for loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int naturalNumber=12345678910,reverse;
    for(naturalNumber=1; naturalNumber<=10; naturalNumber++){
        naturalNumber%10;
        cout<<naturalNumber;
        reverse=naturalNumber/10;
    }
    cout<<reverse;
    return 0;
}