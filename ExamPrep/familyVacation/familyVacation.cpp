#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double budget;
    cin >> budget;

    int nights;
    cin >> nights;

    double priceForNight;
    cin >> priceForNight;

    double percetageExtraExpenses;
    cin >> percetageExtraExpenses;

    if (nights > 7) {
        priceForNight *= 0.95;
    }

    double extraExpensesMoney = budget * (percetageExtraExpenses / 100);
    double nightsPrice = priceForNight * nights;
    double totalPrice = extraExpensesMoney + nightsPrice;

    if (totalPrice <= budget) {
        cout << fixed << setprecision(2) << "Ivanovi will be left with " << budget - totalPrice << " leva after vacation." << endl;
    }
    else {
        cout << fixed << setprecision(2) << totalPrice - budget << " leva needed." << endl;
    }

    return 0;
}