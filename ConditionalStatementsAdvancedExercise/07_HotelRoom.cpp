#include <iostream>
#include <iomanip>
// #include <string>

using namespace std;

int main() {
    string month;
    cin >> month;

    int nights;
    cin >> nights;

    double studioPrice = 0;
    double apartmentPrice = 0;

    if (month == "May" || month == "October") {
        studioPrice = 50;
        apartmentPrice = 65;

        if (nights > 14) {
            studioPrice *= 0.70;
        } else if (nights > 7) {
            studioPrice *= 0.95;
        }
    } else if (month == "June" || month == "September") {
        studioPrice = 75.20;
        apartmentPrice = 68.70;

        if (nights > 14) {
            studioPrice *= 0.80;
        }
    } else if (month == "July" || month == "August") {
        studioPrice = 76;
        apartmentPrice = 77;
    }

    if (nights > 14) {
        apartmentPrice *= 0.90;
    }

    apartmentPrice *= nights;
    studioPrice *= nights;

    cout << fixed << setprecision(2);
    cout << "Apartment: " << apartmentPrice << " lv." << endl;
    cout << "Studio: " << studioPrice << " lv." << endl;

    return 0;
}
