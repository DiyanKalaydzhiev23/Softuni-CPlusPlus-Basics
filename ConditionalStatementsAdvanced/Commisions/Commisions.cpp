#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main() {
    string city;

    double sales;
    double commisionPercent;
    double commissionInMoney;

    cin >> city;
    cin >> sales;

    if (sales < 0) {
        cout << "error" << endl;
        return 1;
    }

    if (city == "Sofia") {
        if (sales <= 500) {
            commisionPercent = 0.05;
        }
        else if (sales <= 1000) {
            commisionPercent = 0.07;
        }
        else if (sales <= 10000) {
            commisionPercent = 0.08;
        }
        else {
            commisionPercent = 0.12;
        }
    }
    else if (city == "Varna") {
        if (sales <= 500) {
            commisionPercent = 0.045;
        }
        else if (sales <= 1000) {
            commisionPercent = 0.075;
        }
        else if (sales <= 10000) {
            commisionPercent = 0.10;
        }
        else {
            commisionPercent = 0.13;
        }
    }
    else if (city == "Plovdiv") {
        if (sales <= 500) {
            commisionPercent = 0.055;
        }
        else if (sales <= 1000) {
            commisionPercent = 0.08;
        }
        else if (sales <= 10000) {
            commisionPercent = 0.12;
        }
        else {
            commisionPercent = 0.145;
        }
    }
    else {
        cout << "error" << endl;
        return 1;
    }

    commissionInMoney = sales * commisionPercent;

    cout << fixed << setprecision(2) << commissionInMoney << endl;

    return 0;
}
