/*
pair is a template class in Standard Template Libyary
pair is not a part of container.
    syntax: pair<T1,T2>obj_name;
    Insert value: obj_name=make_pair("string valu", integer value);
    Accessing pair member first value: cout<<obj_name.first<<endl;
    Accessing pair member second value: cout<<obj_name.second<<endl;

    Compare two pairs with these operator: ==,!=, <, >, <=, >=
*/
#include<bits/stdc++.h>
using namespace std;
class student{
    private:
        string name;
        int age;
    public:
        void setStudent(string s, int a){
            name=s; age=a;
        }
        void showStudent(){
            cout<<"\nName: "<<name;
            cout<<"\nAge: "<<age;
        }
};
int main(){
    pair<string, int>pair1;
    pair<string, string>pair2;
    //pair<string, float>pair3;
    pair<string, student>pair4;

    pair1=make_pair("Faizan",9887370536);
    pair2=make_pair("India","Delhi");
    //pair3=make_pair("Faizan,16");
    student s1;
    s1.setStudent("Faizan",26);
    pair4=make_pair("Student", s1);
    cout<<"\n Pair1\n"<<pair1.first<<"\t"<<pair1.second<<endl;
    cout<<"\n Pair2\n"<<pair2.first<<"\t"<<pair2.second<<endl;
    //cout<<"\n Pair3\n"<<pair3.first<<"\t"<<pair3.second<<endl;

    cout<<"\n Pair4\n"<<pair4.first<<"\t";
    student s12=pair4.second;
    s12.showStudent();
return 0;
}