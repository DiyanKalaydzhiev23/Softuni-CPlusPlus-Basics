#include <iostream>

using namespace std;

int main() {
    int totalPages, pagesPerHour, days;
    cin >> totalPages >> pagesPerHour >> days;

    int totalHours = totalPages / pagesPerHour;
    int hoursPerDay = totalHours / days;

    cout << hoursPerDay << endl;

    return 0;
}