#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double GRAPHICS_CARD_PRICE = 250;
    const double PROCESSOR_PERCENT = 0.35;
    const double RAM_PERCENT = 0.10;
    const double DISCOUNT = 0.15;

    double budget;
    cin >> budget;

    int graphicsCardCount, processorCount, ramCount;
    cin >> graphicsCardCount >> processorCount >> ramCount;

    double totalGraphicsCardPrice = GRAPHICS_CARD_PRICE * graphicsCardCount;
    double totalProcessorsPrice = (totalGraphicsCardPrice * PROCESSOR_PERCENT) * processorCount;
    double totalRamPrice = (totalGraphicsCardPrice * RAM_PERCENT) * ramCount;

    double totalPrice = totalGraphicsCardPrice + totalProcessorsPrice + totalRamPrice;

    if (graphicsCardCount > processorCount) {
        totalPrice *= (1 - DISCOUNT); // 85% from the original price
    }

    cout << fixed << setprecision(2);

    if (totalPrice <= budget) {
        cout << "You have " << budget - totalPrice << " leva left!" << endl;
    } else {
        cout << "Not enough money! You need " << totalPrice - budget << " leva more!" << endl;
    }

    return 0;
}
