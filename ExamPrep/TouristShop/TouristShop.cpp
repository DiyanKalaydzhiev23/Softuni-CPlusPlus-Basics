#include <iostream>
#include <string>

using namespace std;

int main() {
    double budget;
    cin >> budget;
    
    cin.ignore(); // ignore new char \n

    int productsBought = 0; // counter
    double moneySpent = 0;

    string productName;
    double productPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (getline(cin, productName) && productName != "Stop") {
        cin >> productPrice;
        cin.ignore();

        productsBought++;

        if (productsBought % 3 == 0) {
            productPrice /= 2;
        }

        if (moneySpent + productPrice > budget) {
            cout << "You don't have enough money!" << endl;
            cout << "You need " << (moneySpent + productPrice) - budget << " leva!" << endl;
            return 0;
        }
        else {
            moneySpent += productPrice;
        }
    }

    cout << "You bought " << productsBought << " products for " << moneySpent << " leva." << endl;

    return 0;
}