#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string destination;

    double excursionPrice;
    double money;

    while (cin >> destination && destination != "End") {
        cin >> excursionPrice;
        double savedMoney = 0;

        while (savedMoney < excursionPrice) {
            cin >> money;
            savedMoney += money;
        }

        cout << "Going to " << destination << "!" << endl;
    }
}
