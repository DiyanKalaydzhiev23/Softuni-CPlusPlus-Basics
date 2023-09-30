#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stod;
using std::ios;

int main() {
    double balance = 0;

    string deposit;
    cin >> deposit;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (deposit != "NoMoreMoney") {
        double depositDecimal = stod(deposit);

        if (depositDecimal < 0) {
            cout << "Invalid operation!" << endl;
            break;
        }

        balance += depositDecimal;

        cout << "Increase: " << depositDecimal << endl;

        cin >> deposit;
    }

    cout << "Total: " << balance << endl;

    return 0;
}
