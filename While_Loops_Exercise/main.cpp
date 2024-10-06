#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int MAX_SPENDING_DAYS = 5;

    double excursionPrice, balance;
    cin >> excursionPrice >> balance;

    int days = 0, spendingDays = 0;

    string action; // spend || save
    double amount;

    while (true) {
        cin >> action >> amount;
        days++;

        if (action == "spend") {
            balance -= (amount > balance ? balance : amount);
            spendingDays++;
        } else {
            balance += amount;
            spendingDays = 0;
        }

        if (balance >= excursionPrice) {
            cout << "You saved the money for " << days << " days." << endl;
            break;
        }

        if (spendingDays == MAX_SPENDING_DAYS) {
            cout << "You can't save the money." << endl;
            cout << days << endl;
            break;
        }
    }

    return 0;
}
