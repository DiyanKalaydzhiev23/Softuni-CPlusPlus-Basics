#include <iostream>

using namespace std;

int main() {
    const double chickenMenuPrice = 10.35;
    const double fishMenuPrice = 12.40;
    const double vegetarianMenuPrice = 8.15;
    const double deliveryPrice = 2.50;

    const double dessertPercent = 0.20;

    double chickenMenuCount, fishMenuCount, vegetarianMenuCount;
    cin >> chickenMenuCount >> fishMenuCount >> vegetarianMenuCount;

    double totalChickenMenuPrice = chickenMenuPrice * chickenMenuCount;
    double totalFishMenuPrice = fishMenuPrice * fishMenuCount;
    double totalVegetarianMenuPrice = vegetarianMenuPrice * vegetarianMenuCount;
    double totalMenusPrice = totalChickenMenuPrice + totalFishMenuPrice + totalVegetarianMenuPrice;
    double dessertPrice = totalMenusPrice * dessertPercent;
    double totalPrice = totalMenusPrice + dessertPrice + deliveryPrice;

    cout << totalPrice << endl;

    return 0;
}