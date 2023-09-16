#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int price;

    string dayOfTheWeek;
    cin >> dayOfTheWeek;

    if (dayOfTheWeek == "Wednesday" || dayOfTheWeek == "Thursday") {
        price = 14;
    }
    else if (dayOfTheWeek == "Saturday" || dayOfTheWeek == "Sunday") {
        price = 16;
    }
    else {
        price = 12;
    }

    cout << price << endl;

    return 0;
}