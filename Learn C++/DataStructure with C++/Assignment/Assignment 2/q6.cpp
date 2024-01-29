//6 Implement a program that checks if a year entered by the user is a leap year or not.

#include <bits/stdc++.h>
using namespace std;
int main() {
   int year;
   cout<<"Enter a year: ";
   cin>>year;
   if (year % 400 == 0) {
      cout<<"leap year"<< year;
   }
   else if (year % 100 == 0) {
      cout<<"leap year"<< year;
   }
   else if (year % 4 == 0) {
      cout<<"leap year"<< year;
   }
   else {
      cout<<"leap year."<<year;
   }
   return 0;
}