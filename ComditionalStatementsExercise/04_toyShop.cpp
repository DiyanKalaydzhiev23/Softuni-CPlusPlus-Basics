#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int DISCOUNT_THRESHOLD = 50;

    const double PUZZLE_PRICE = 2.60;
    const double DOLL_PRICE = 3;
    const double TEDDY_BEAR_PRICE = 4.10;
    const double MINION_PRICE = 8.20;
    const double TRUCK_PRICE = 2;

    double excursionPrice;
    cin >> excursionPrice;

    int puzzleCount, dollCount, teddyBearCount, minionCount, truckCount;
    cin >> puzzleCount >> dollCount >> teddyBearCount >> minionCount >> truckCount;

    double totalPrice = (
            (PUZZLE_PRICE * puzzleCount) +
            (DOLL_PRICE * dollCount) +
            (TEDDY_BEAR_PRICE * teddyBearCount) +
            (MINION_PRICE * minionCount) +
            (TRUCK_PRICE * truckCount)
    );
    int totalToysCount = (
            puzzleCount +
            dollCount +
            teddyBearCount +
            minionCount +
            truckCount
    );

    if (totalToysCount >= DISCOUNT_THRESHOLD) {
        totalPrice *= 0.75; // 25% off
    }

    totalPrice *= 0.90; // 10% off

    cout << fixed << setprecision(2);

    if (totalPrice < excursionPrice) {
        cout << "Not enough money! " << excursionPrice - totalPrice << " lv needed." << endl;
    } else {
        cout << "Yes! " << totalPrice - excursionPrice << " lv left." << endl;
    }
}
