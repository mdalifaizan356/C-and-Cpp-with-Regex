/* constructor is special type of member function of the class in c++.
The name of the constructor is same as the name of the class.
It has no return type. so can't use return keyword.
It must be an insatance member function, That is, it can never be static.
It is implicity(automatically) invoked(call) when an object created.
It is used to solve problem of initialization.

construtor object ko object banata he.Jo kaam object k bante hi karana
he(specially member variable ka initialization jisme garbage value rakhi he) use hum constructo ki help se kar sakte he

Constructor type 
                1.Default Constructor
                2.Parameterized Constructor
                3.Copy Constructor

    1. Default Constructor: Jab hum kisi class me koi bhi constructor nahi banate he tb compiler
    automatic constructor bana deta he or wo call bhi hota he. matlab ye k jab bhi object banega tb constructor banega
    lekin wo obj file me banta he isliye hame dikhayi nahi deta qk hamara  code source file me 
    hota he. or agar hum apne program me non-parameterized constructor banate he to wo source 
    file me hota he yahi default constructor he. Agar hum class me ek bhi Constructor bana lete he to 
    compiler Constructor nahi banayega.

    2. Parameterized Constructor wo hota he jisme hum parameter/argument concept use karte he.
    agar hum multiple  Parameterized Constructor use karte he diffrent number of parameter k sath to 
    hm  Constructor overloading ka machanism use kar rhe hote he.

    3. Copy Constructor: Isko bhi compiler banata he. Class me agar koi bhi Constructor nahi bana 
    he to compiler 2 Constructor banayega 1st default Constructor and 2nd is Copy Constructor.
    Copy Constructor is situation me call hota he c4=(c1) or c4(c1). is statement me c4 k ander
    c1 ki value pass ho rhi he. c1 yaha pr complex type ka he. isliye ye default or parameterized
    Constructor ko call nahi karega yaha compiler khud iske liye copy Constructor banayega. 
    Agar hamare code me ek bhi Constructor hm bana dete he to compiler default Constructor nahi 
    banata he lekin copy Constructor banata he. or agar hm default and copy dono Constructor bana
    dete he to copiler kuch bhi nahi banata he. Copy Constructor banate time hm & (reference variable) 
    ka use karte he object ka nahi. agar object ka use karenge to wo recursion ban jayega or error
    aayegi.

*/

#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int a,b;
public:
    Complex(){                        //Default Constructor    
        cout<<"Hii Faizan";
    }
    Complex(int x, int y){           //Parameterized Constructor   
        a=x;
        b=y;
        cout<<x<<y;
        cout<<a<<b;
    }
    Complex(int x){                 //Parameterized Constructor    
        a=x;
        cout<<a;
    }
    Complex(Complex &c){            //Copy Constructor
        a=c.a;
        b=c.b;
    }
};
int main(){
    //Complex c1,c2,c3;           //Jaise hi object banega constuctor call ho jayega. Jitne Object honge sab k liye alag alag call hoga.
    //Complex c1(4,6), c2(5);
    //Complex c1=Complex(5,4);    // create object with different  way.
   //Complex c4(c1);
return 0;
}