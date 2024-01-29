//15 Temperature Converter: Implement a program that converts temperatures between Fahrenheit and Celsius.

#include<bits/stdc++.h>
using namespace std;

float celsiusToFahrenheit(float celsious) {
  return (9 * celsious) / 5 + 32;
}

int main() {
  float celsious;
  cout << "Enter temperature in Celsius\n";
  cin >> celsious;
  float f = celsiusToFahrenheit(celsious);
  cout << "Temperature in Fahrenheit: " << f; 
  return 0;
}
