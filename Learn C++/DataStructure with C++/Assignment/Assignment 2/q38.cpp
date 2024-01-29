// 38 Create a class in C++ to represent a Rectangle with member functions to calculate its area and perimeter.

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int length, breadth;
    public:
        void setdata(int l, int b){
            length=l;
            breadth=b;
        }

        void showdata(){
            cout<<"length and breadth of reactangle is "<<length<<"and"<<breadth<<endl;
        }
        int getArea(){
            return (length*breadth);
        }
        int getPerimeter(){
            return (2*(length+breadth));
        }
};

int main(){
    Rectangle r1;
    r1.setdata(10,5);
    r1.showdata();
    cout<<r1.getArea()<<endl;
    cout<<r1.getPerimeter();
    return 0;
}