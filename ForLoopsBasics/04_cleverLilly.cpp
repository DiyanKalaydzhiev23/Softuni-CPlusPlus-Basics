#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int age, toyPrice;
    double washingMachinePrice;

    cin >> age >> washingMachinePrice >> toyPrice;

    const double BROTHER_TAX = 1;
    const double YEAR_MONEY_INCREASE = 10;
    int toyCount = 0;
    double savedMoney = 0;
    double birthdayMoney = 10;

    for (int currentYear = 1; currentYear <= age; currentYear++) {
        if (currentYear % 2 == 0) {
            savedMoney += birthdayMoney - BROTHER_TAX; // increase current money
            birthdayMoney += YEAR_MONEY_INCREASE; // Money for next birthday
        } else {
            toyCount++;
        }
    }

    savedMoney += (toyCount * toyPrice);

    cout << fixed << setprecision(2);
    if (savedMoney >= washingMachinePrice) {
        cout << "Yes! " << savedMoney - washingMachinePrice << endl;
    } else {
        cout << "No! " << washingMachinePrice - savedMoney << endl;
    }


    return 0;
}
