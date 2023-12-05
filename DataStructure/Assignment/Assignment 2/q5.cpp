//5 Write a program that checks whether a character entered by the user is a vowel or a consonant.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char input, flag=0;
//     char vowel[10]={'a','e','i','o','u','A','E','I','O','U',};
//     cout<<"Enter any one character of alphabat"<<endl;
//     cin>>input;
//     for(int i=0; i<=10; i++){
//         if(input==vowel[i]){
//             flag=1;
//         }
//     }
//     if(flag==1){
//             cout<<"Character is Vowel";
//         }
//         else{
//             cout<<"Character is Consonant";
//         }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    char input;
    cout<<"Enter any one character of alphabat"<<endl;
    cin>>input;
    if(input=='A' || input=='a' || input=='E' || input=='e' || input=='I' || input=='i' || input=='O' || input=='o' || input=='U' || input=='u'){
            cout<<"Character is Vowel";
        }
        else{
            cout<<"Character is Consonant";
        }
    return 0;
}