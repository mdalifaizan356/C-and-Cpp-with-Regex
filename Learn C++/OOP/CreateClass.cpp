// Create Class with two function. Function define inside out side the class.
#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    int Id, rollNo, batch;
    string Name, FatherName;
    void showData();
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
};

// Function definition out of the class.This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function
void Student::showData(){
        cout<<Id<<"\t";
        cout<<rollNo<<"\t";
        cout<<batch<<"\t";
        cout<<Name<<"\t";
        cout<<FatherName<<"\t";
    }

int main(){
    Student stu1;
    stu1.getData();
    stu1.showData();
    return 0;
}