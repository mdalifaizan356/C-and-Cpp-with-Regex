#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    int Id, rollNo, batch;
    string Name, FatherName;

    void getData(){
        cout<<"Enter Id"<<endl;
        cin>>Id;
        cout<<"Enter Roll Number"<<endl;
        cin>>rollNo;
        cout<<"Enter Batch Number"<<endl;
        cin>>batch;
        cout<<"Enter Name"<<endl;
        cin>>Name;
        cout<<"Enter Father name"<<endl;
         cin>>FatherName;
    }

    void ShowData(){
        cout<<Id<<"\t";
        cout<<rollNo<<"\t";
        cout<<batch<<"\t";
        cout<<Name<<"\t";
        cout<<FatherName<<"\t";
    }


};
int main(){
    student stu1;
    stu1.getData();
    stu1.ShowData();

    return 0;
}