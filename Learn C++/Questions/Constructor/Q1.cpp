#include<bits\stdc++.h>
using namespace std;

class airticketfare{
    public:
    int passangerId, passangerPhNo, basePrice;
    string passangerName, passangerEmail; 

    void getData(){
        cout<<"Enter Id"<<endl;
        cin>>passangerId;

        cout<<"Enter Name"<<endl;
        cin>>passangerName;

        cout<<"Enter Phone Number"<<endl;
        cin>>passangerPhNo;

        cout<<"Enter Email"<<endl;
        cin>>passangerEmail;

        cout<<"Enter Base Price"<<endl;
        cin>>basePrice;
    }

    void ticketFare(){
        float gst, serTax, baseFare;
        gst=(basePrice/100)*18;
        serTax=(basePrice/100)*2;
        baseFare=basePrice+serTax+gst;
    }

void showData(){
    cout<<passangerId<<endl;
    cout<<passangerName<<endl;
    cout<<passangerPhNo<<endl;
    cout<<passangerEmail<<endl;
    //cout<<baseFare<<endl;
    }
};
int main(){
   airticketfare Indigo;
   Indigo.getData();
   Indigo.showData();
    return 0;
}