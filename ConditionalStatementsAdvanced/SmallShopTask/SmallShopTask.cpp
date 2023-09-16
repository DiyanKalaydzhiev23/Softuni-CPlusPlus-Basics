#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string product;
    string city;

    double quantity;
    double price;
    double finalPrice;

    cin >> product;
    cin >> city;
    cin >> quantity;

    if (city == "Sofia") {
        if (product == "coffee") {
            price = 0.50;
        }
        else if (product == "water") {
            price = 0.80;
        }
        else if (product == "beer") {
            price = 1.20;
        }
        else if (product == "sweets") {
            price = 1.45;
        }
        else if (product == "peanuts") {
            price = 1.60;
        }
    }
    else if (city == "Varna") {
        if (product == "coffee") {
            price = 0.45;
        }
        else if (product == "water") {
            price = 0.70;
        }
        else if (product == "beer") {
            price = 1.10;
        }
        else if (product == "sweets") {
            price = 1.35;
        }
        else if (product == "peanuts") {
            price = 1.55;
        }
    }
    else if (city == "Plovdiv") {
        if (product == "coffee") {
            price = 0.40;
        }
        else if (product == "water") {
            price = 0.70;
        }
        else if (product == "beer") {
            price = 1.15;
        }
        else if (product == "sweets") {
            price = 1.30;
        }
        else if (product == "peanuts") {
            price = 1.50;
        }
    }

    finalPrice = price * quantity;

    cout << finalPrice << endl;

    return 0;
}