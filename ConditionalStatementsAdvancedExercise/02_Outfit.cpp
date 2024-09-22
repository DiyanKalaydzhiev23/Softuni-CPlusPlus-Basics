#include <iostream>
#include <iomanip>
// #include <string>

using namespace std;

int main() {
    int degrees;
    cin >> degrees;

    string timeOfTheDay;
    cin >> timeOfTheDay;

    string outfit;
    string shoes;

    if (timeOfTheDay == "Morning") {
        if (degrees >= 10 && degrees <= 18) {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        } else if (degrees > 18 && degrees <= 24) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degrees >= 25) {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
    } else if (timeOfTheDay == "Afternoon") {
        if (degrees >= 10 && degrees <= 18) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degrees > 18 && degrees <= 24) {
            outfit = "T-Shirt";
            shoes = "Sandals";
        } else if (degrees >= 25) {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
    } else if (timeOfTheDay == "Evening") {
        if (degrees >= 10 && degrees <= 18) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degrees > 18 && degrees <= 24) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degrees >= 25) {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;

    return 0;
}
