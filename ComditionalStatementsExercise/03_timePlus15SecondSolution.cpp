#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int BONUS_MINUTES = 15;

    int hours, minutes;  // hours = 11; minutes = 10;
    cin >> hours >> minutes;

    int hoursInMinutes = hours * 60;  // 11 * 60 => 660
    minutes += hoursInMinutes + BONUS_MINUTES; // 660 + 10 + 15 => 685

    int newHours = minutes / 60 % 24;  // 1440(minutes) / 60(minutes) => 24(hours) % 24 =>
    int newMinutes = minutes % 60;

    cout << newHours << ':' << setw(2) << setfill('0') << newMinutes << endl;
}
