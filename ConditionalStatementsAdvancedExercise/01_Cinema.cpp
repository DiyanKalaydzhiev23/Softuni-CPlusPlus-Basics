#include <iostream>
#include <iomanip>
// #include <string>

using namespace std;

int main() {
    const double PREMIERE = 12;
    const double NORMAL = 7.50;
    const double DISCOUNT = 5;

    string projectionType;
    cin >> projectionType;

    int rows, cols;
    cin >> rows >> cols;

    int totalSpace = rows * cols;
    double income = 0;

    if (projectionType == "Premiere") {
        income = totalSpace * PREMIERE;
    } else if (projectionType == "Normal") {
        income = totalSpace * NORMAL;
    } else if (projectionType == "Discount") {
        income = totalSpace * DISCOUNT;
    }

    cout << fixed << setprecision(2) << income << " leva" << endl;

    return 0;
}
