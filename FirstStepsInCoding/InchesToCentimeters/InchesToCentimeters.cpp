#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    const double ONE_INCH_TO_ONE_CENTIMETER = 2.54;

    double inches;
    cin >> inches;

    double centimeters = inches * ONE_INCH_TO_ONE_CENTIMETER;

    cout << centimeters << endl;
}