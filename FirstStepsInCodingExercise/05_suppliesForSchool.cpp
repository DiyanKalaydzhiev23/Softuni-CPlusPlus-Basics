#include <iostream>

using namespace std;

int main() {
    const double penPrice = 5.80;
    const double markerPrice = 7.20;
    const double cleanerPrice = 1.20;

    int penCount, markerCount, cleanerCount;
    cin >> penCount >> markerCount >> cleanerCount;

    double percentDiscount;
    cin >> percentDiscount;

    double totalPenPrice = penCount * penPrice;
    double totalMarkerPrice = markerCount * markerPrice;
    double totalCleanerPrice = cleanerCount * cleanerPrice;

    double totalPriceBeforeDiscount =
            totalPenPrice +
            totalMarkerPrice +
            totalCleanerPrice;
    double discount = totalPriceBeforeDiscount * (percentDiscount / 100); // 100 * (10 / 100) => 100 / 0.10 => 10
    double totalPriceAfterDiscount = totalPriceBeforeDiscount - discount;  // 100 - 10 => 90

    cout << totalPriceAfterDiscount << endl;

    return 0;
}