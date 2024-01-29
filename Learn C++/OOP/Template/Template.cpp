/*
The keyword template is used to define fuction template and class template.
It is a way to make your function or class generaliz as for as data type is concern.

Agar hame function overloading is wajah se karrni padh rhi he jisme  function argument and 
function code same he but data type change he to is condition me hm different-2 data type k 
function na bana kar ek hi function bana sakte he and ye function itna generalize hoga ki agar
user different-2 data type bhi use karrta he to bhi ye function khud ko user k hisab se use kiye
data type ko follow karega. Ye Template ki help se possible he.

syntax: template<class type> type F function_name(type_argument1, type_argument2,,,,)

Yaha par template ek keyword he uske baad class bhi ek keyword he but class k aage x,y placeholder
he jo hum kuch bhi rakh sakte he.
function banate time jaha jaha hum ye placeholder likh dete he wo generalize karne k kaam aata he.
Ye placeholder replace ho jata he us data type se jo data type hm function call karte time use
karte he.
Compiler early binding karte time jis type ka argument dekhta he x ka type wahi rakh deta he.
To compiler har baar jab early binding karta he to us time wo x ki value ko bhi har baar change
kar deta he.
Agar ek call me 2 different-2 type ka data pass ho rha ho to hm multiple placeholder le sakte he.
like:- <class type1, class type2, class type3, class type n> 

*/

#include<bits/stdc++.h>
using namespace std;
template<class x, class y> x big(x a,y b){
    if(a>b){
        return(a);
    }
    else{
        return(b);
    }
};
int main(){
    cout<<big(4,5)<<"\n";
    cout<<big(4.5,6.7)<<"\n";
    cout<<big(4.5,8)<<"\n";
return 0;
}