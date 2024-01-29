//41 Write a C++ program that simulates a simple ATM system with options to deposit, withdraw, and check the account balance.

#include<bits/stdc++.h>
using namespace std;
class myBank{
    private:
        int accountNo, depositBal=0, withdrawBal=0, remainBal=0;
        string name, fatherName;
    
    public:
            void createAccount(void){
            cout<<"Enter Account Number"<<endl;
            cin>>accountNo;
            cout<<"Enter Name"<<endl;
            cin>>name;
            cout<<"Enter Father's name"<<endl;
            cin>>fatherName;

        }
        int depositBalance(void){
            cout<<"Deposite Amount"<<endl;
            cin>>depositBal;
            return (remainBal=remainBal+depositBal);
        }
        int withdrawBalance(void){
            cout<<"Withdraw Amount"<<endl;
            cin>>withdrawBal;
            return (remainBal=depositBal-withdrawBal);
        }
        void showData(void){
            cout<<"Account Number "<<accountNo<<endl;
            cout<<"Name "<<name<<endl;
            cout<<"Father's name "<<fatherName<<endl;
            cout<<"Current Balance "<<remainBal<<endl;
        }
};

int main(){
    myBank c1;
    cout<<"Create Account"<<endl;
    c1.createAccount();
    c1.depositBalance();
    c1.showData();
    cout<<"     "<<endl;
    c1.withdrawBalance();
    c1.showData();
    return 0;
}