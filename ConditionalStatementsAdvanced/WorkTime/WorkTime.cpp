#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int hour;
    string dayOfTheWeek;

    cin >> hour;
    cin >> dayOfTheWeek;

    bool isOpen = false;

    if (hour >= 10 && hour <= 18) {
        if (dayOfTheWeek != "Sunday") {
            isOpen = true;
        }
    }

    cout << (isOpen ? "open" : "closed") << endl;

    return 0;
}
