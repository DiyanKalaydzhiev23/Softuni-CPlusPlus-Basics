#include <iostream>

using std::cout;
using std::endl;

int main() {
    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            // cout << (hour < 10 ? "0" : "") << hour << ':' << (minute < 10 ? "0" : "") << minute << endl;
            cout << hour << ':' << minute << endl;
        }
    }
}
