#include <iostream>
#include <iomanip>
#include <cmath>
// #include <string>

using namespace std;

int main() {
    int examHour, examMinutes; // 10, 30
    cin >> examHour >> examMinutes;

    int studentHour, studentMinutes; // 09, 00
    cin >> studentHour >> studentMinutes;

    int examTimeInMinutes = examHour * 60 + examMinutes;  // 10 * 60 + 30 => 630
    int studentTimeInMinutes = studentHour * 60 + studentMinutes;  // 9 * 60 + 0 => 540

    int timeDiff = examTimeInMinutes - studentTimeInMinutes;  // 630 - 540 => 90

    if (timeDiff > 30) {
        cout << "Early" << endl;
    } else if (timeDiff < 0) {
        cout << "Late" << endl;
    } else {
        cout << "On time" << endl;
    }

    int hours = abs(timeDiff) / 60; // |-90| => 90 / 60 => 1
    int minutes = abs(timeDiff) % 60; // |-90| => 90 % 60 => 30

    if (hours > 0) {
        cout << hours << ':' << setw(2) << setfill('0') << minutes << " hours ";
    } else if (minutes > 0) {
        cout << minutes << " minutes ";
    }

    if (timeDiff > 0) {
        cout << "before the start" << endl;
    } else if (timeDiff < 0) {
        cout << "after the start" << endl;
    }

    return 0;
}