#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int BONUS_MINUTES = 15;

    int hours, minutes;
    cin >> hours >> minutes;

    minutes += BONUS_MINUTES;

    if (minutes >= 60) {
        minutes -= 60;
        hours += 1;
    }

    if (hours >= 24) {
        hours -= 24;
    }

    cout << hours << ':' << setw(2) << setfill('0') << minutes << endl;
}
