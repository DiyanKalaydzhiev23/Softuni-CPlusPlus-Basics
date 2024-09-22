#include <iostream>
#include <iomanip>
// #include <string>

using namespace std;

int main() {
    const double ROSES_PRICE = 5;
    const double DAHLIAS_PRICE = 3.80;
    const double TULIPS_PRICE = 2.80;
    const double NARCISSUS_PRICE = 3;
    const double GLADIOLUS_PRICE = 2.50;

    string flowersType;
    cin >> flowersType;

    int count, budget;
    cin >> count >> budget;

    double totalPrice = 0;

    if (flowersType == "Roses") {
        totalPrice = ROSES_PRICE * count;

        if (count > 80) {
            totalPrice *= 0.90; // 10% off
        }
    } else if (flowersType == "Dahlias") {
        totalPrice = DAHLIAS_PRICE * count;

        if (count > 90) {
            totalPrice *= 0.85;  // 15% off
        }
    } else if (flowersType == "Tulips") {
        totalPrice = TULIPS_PRICE * count;

        if (count > 80) {
            totalPrice *= 0.85;  // 15% off
        }
    } else if (flowersType == "Narcissus") {
        totalPrice = NARCISSUS_PRICE * count;

        if (count < 120) {
            totalPrice *= 1.15;  // 15% on
        }
    } else if (flowersType == "Gladiolus") {
        totalPrice = GLADIOLUS_PRICE * count;

        if (count < 80) {
            totalPrice *= 1.20;  // 20% on
        }
    }

    cout << fixed << setprecision(2);

    if (totalPrice > budget) {
        cout
                << "Not enough money, you need "
                << totalPrice - budget
                << " leva more."
                << endl;
    } else {
        cout
                << "Hey, you have a great garden with "
                << count << " " << flowersType << " and "
                << budget - totalPrice << " leva left."
                << endl;
    }

    return 0;
}
