#include <iostream>

using namespace std;

int main() {
    double deposit;
    cin >> deposit;

    int depositTermInMonths;
    cin >> depositTermInMonths;

    double annualInterestRate;
    cin >> annualInterestRate;

    double annualInterestRatePercent = annualInterestRate / 100;
    double finalAmount = deposit + depositTermInMonths * ((deposit * annualInterestRatePercent) / 12);

    cout << finalAmount << endl;

    return 0;
}