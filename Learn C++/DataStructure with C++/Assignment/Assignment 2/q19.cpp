//19 Day of the Week: Given a day number (1-7), print the name of the corresponding day of the week
//13 Month Name: Given a month number (1-12), print the name of the corresponding month
#include<bits/stdc++.h>
using namespace std;
int main(){
    int daynum;
    cout<<"Enter day number";
    cin>>daynum;
    switch(daynum){
        case(1):
        cout<<"Monday is 1 Day of Week";
        break;
        case(2):
        cout<<"Tuesday is 2 Day of Week";
        break;
        case(3):
        cout<<"Wednesday is 3 Day of Week";
        break;
        case(4):
        cout<<"Thursady is 4 Day of Week";
        break;
        case(5):
        cout<<"Friday is 5 Day of Week";
        break;
        case(6):
        cout<<"Saturday is 6 Day of Week";
        break;
        case(7):
        cout<<"Sunday is 7 Day of Week";
        break;
        default:
        cout<<"Invalid Number";
        break;
    }
    return 0;
}