//13 Month Name: Given a month number (1-12), print the name of the corresponding month
#include<bits/stdc++.h>
using namespace std;
int main(){
    int Monthnum;
    cout<<"Enter month number";
    cout<<"Press 0 for exit";
    cin>>Monthnum;
    switch(Monthnum){
        case(1):
        cout<<"January is 1 month of Year";
        break;
        case(2):
        cout<<"February is 2 month of Year";
        break;
        case(3):
        cout<<"March is 3 month of Year";
        break;
        case(4):
        cout<<"April is 4 month of Year";
        break;
        case(5):
        cout<<"May is 5 month of Year";
        break;
        case(6):
        cout<<"June is 6 month of Year";
        break;
        case(7):
        cout<<"July is 7 month of Year";
        break;
        case(8):
        cout<<"August is 8 month of Year";
        break;
        case(9):
        cout<<"September is 9 month of Year";
        break;
        case(10):
        cout<<"October is 10 month of Year";
        break;
        case(11):
        cout<<"November is 11 month of Year";
        break;
        case(12):
        cout<<"December is 12 month of Year";
        break;
        case(0): exit(0);
        default:
        cout<<"Invalid Number";
        break;
    }
    return 0;
}