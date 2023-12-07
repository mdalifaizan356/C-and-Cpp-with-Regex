//14Implement a program that calculates the total cost of items with a discount based on the purchase amount.
#include<bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;


int main() {
    // Creating a 2D vector with item name (string) and its price (double)
    std::vector<std::pair<std::string, double>> items;

    // Adding items along with their prices to the vector
    items.push_back(std::make_pair("Wallet", "a" , 10.99));
    items.push_back(std::make_pair("Watch","3", 25.49));
    items.push_back(std::make_pair("Shoes","6", 5.75));

    // Accessing and printing items and their prices
    for (const auto& item : items) {
        std::cout<< item.first << item.second << " Rs "<< std::endl;
    }

    return 0;
}