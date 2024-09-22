#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
    int days;
    cin >> days;

    string roomType;
    cin.ignore();
    getline(cin, roomType);

    string feedback;
    cin >> feedback;

    int nights = days - 1;
    double priceForOneNight = 0;

    if (roomType == "room for one person") {
        priceForOneNight = 18;
    } else if (roomType == "apartment") {
        priceForOneNight = 25;

        if (nights < 10) {
            priceForOneNight *= 0.70;
        } else if (nights <= 15) {
            priceForOneNight *= 0.65;
        } else {
            priceForOneNight *= 0.50;
        }
    } else if (roomType == "president apartment") {
        priceForOneNight = 35;

        if (nights < 10) {
            priceForOneNight *= 0.90;
        } else if (nights <= 15) {
            priceForOneNight *= 0.85;
        } else {
            priceForOneNight *= 0.80;
        }
    }

    if (feedback == "positive") {
        priceForOneNight *= 1.25;
    } else {
        priceForOneNight *= 0.90;
    }

    double totalPrice = priceForOneNight * nights;

    cout << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}
