#include <iostream>

using namespace std;

int main() {
    double totalPrice = 0;

    int daysCount;
    cin >> daysCount;

    int hoursCount;
    cin >> hoursCount;

    cout.setf(ios::fixed);
    cout.precision(2);

    for (int day = 1; day <= daysCount; day++) {
        double priceForTheDay = 0;

        for (int hour = 1; hour <= hoursCount; hour++) {
            if (day % 2 == 0 && hour % 2 != 0) {
                priceForTheDay += 2.50;
            }
            else if (day % 2 != 0 && hour % 2 == 0) {
                priceForTheDay += 1.25;
            }
            else {
                priceForTheDay += 1;
            }
        }

        totalPrice += priceForTheDay;
        cout << "Day: " << day << " - " << priceForTheDay << " leva" << endl;
    }

    cout << "Total: " << totalPrice << " leva" << endl;

    return 0;
}
