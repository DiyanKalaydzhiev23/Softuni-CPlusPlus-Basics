#include <iostream>
#include <iomanip>
// #include <string>

using namespace std;

int main() {
    double budget;
    cin >> budget;

    string season;
    cin >> season;

    string destination;
    string placeType;
    double price;

    if (budget <= 100) {
        destination = "Bulgaria";

        if (season == "summer") {
            placeType = "Camp";
            price = budget * 0.30;
        } else {
            placeType = "Hotel";
            price = budget * 0.70;
        }
    } else if (budget <= 1000) {
        destination = "Balkans";

        if (season == "summer") {
            placeType = "Camp";
            price = budget * 0.40;
        } else {
            placeType = "Hotel";
            price = budget * 0.80;
        }
    } else {
        destination = "Europe";
        placeType = "Hotel";
        price = budget * 0.90;
    }

    cout << "Somewhere in " << destination << endl;
    cout << placeType << " - " << fixed << setprecision(2) << price << endl;

    return 0;
}
