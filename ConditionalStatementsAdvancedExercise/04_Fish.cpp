#include <iostream>
#include <iomanip>
// #include <string>

using namespace std;

int main() {
    const int SPRING_PRICE = 3000;
    const int SUMMER_AUTUMN_PRICE = 4200;
    const int WINTER_PRICE = 2600;

    const double FIRST_LEVEL_DISCOUNT = 0.10;
    const double SECOND_LEVEL_DISCOUNT = 0.15;
    const double THIRD_LEVEL_DISCOUNT = 0.25;
    const double EXTRA_DISCOUNT = 0.05;

    int budget;
    cin >> budget;

    string season;
    cin >> season;

    int people;
    cin >> people;

    double totalPrice = 0;

    if (season == "Spring") {
        totalPrice = SPRING_PRICE;
    } else if (season == "Winter") {
        totalPrice = WINTER_PRICE;
    } else {  // season == "Summer" || season == "Autumn"
        totalPrice = SUMMER_AUTUMN_PRICE;
    }

    if (people <= 6) {
        totalPrice *= (1 - FIRST_LEVEL_DISCOUNT);
    } else if (people <= 11) {
        totalPrice *= (1 - SECOND_LEVEL_DISCOUNT);
    } else {
        totalPrice *= (1 - THIRD_LEVEL_DISCOUNT);
    }

    if (people % 2 == 0 && season != "Autumn") {
        totalPrice *= (1 - EXTRA_DISCOUNT); //  1 - 0.05 => 0.95 => 5% off
    }

    cout << fixed << setprecision(2);

    if (budget >= totalPrice) {
        cout << "Yes! You have " <<  budget - totalPrice << " leva left." << endl;
    } else {
        cout << "Not enough money! You need " << totalPrice - budget << " leva." << endl;
    }

    return 0;
}
