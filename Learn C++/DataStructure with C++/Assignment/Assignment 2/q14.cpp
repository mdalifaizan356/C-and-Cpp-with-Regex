//14 Implement a program that calculates the total cost of items with a discount based on the purchase amount.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int itemTotal, purchaseAmount=0, discount,i;
    cout<<"Enter total number of item";
    cin>>itemTotal;
    int itemPrice[itemTotal];
    cout<<"Enter Prices of "<<itemTotal<<" items"<<endl;
    for(i=1; i<=itemTotal; i++){
    cin>>itemPrice[i];
    }
    for(i=1; i<=itemTotal; i++){
    purchaseAmount=purchaseAmount+itemPrice[i];
    }
    cout<<"Your Purchase Amount is: "<<purchaseAmount<<endl;
    if(purchaseAmount<=2500){
        discount=(purchaseAmount*5)/100;
        cout<<"You get 5% discount of your purchase amount and discount is Rs "<<discount<<endl;
        cout<<"you have total pay "<<purchaseAmount-discount<<"Rs";
    }
    else if(purchaseAmount<=5000){
        discount=(purchaseAmount*10)/100;
        cout<<"You get 10% discount of your purchase amount and discount is Rs "<<discount<<endl;
        cout<<"you have total pay "<<purchaseAmount-discount<<"Rs";
    }
    else if(purchaseAmount<=7500){
        discount=(purchaseAmount*15)/100;
        cout<<"You get 10% discount of your purchase amount and discount is Rs "<<discount<<endl;
        cout<<"you have total pay "<<purchaseAmount-discount<<"Rs";
    }
    else if(purchaseAmount<=10000){
        discount=(purchaseAmount*30)/100;
        cout<<"You get 10% discount of your purchase amount and discount is Rs "<<discount<<endl;
        cout<<"you have total pay "<<purchaseAmount-discount<<"Rs";
    }
    else{
        cout<<"You don't get  discount of your purchase amount"<<endl;
        cout<<"you have total pay "<<purchaseAmount<<"Rs";
    }
    return 0;
}