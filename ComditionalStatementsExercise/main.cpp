#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double DECOR_PERCENTAGE = 0.10;
    const double OUTFIT_DISCOUNT = 0.10;
    const int DISCOUNT_THRESHOLD = 150;

    double budget;
    cin >> budget;

    int extras;
    cin >> extras;

    double priceForExtraOutfit;
    cin >> priceForExtraOutfit;

    double decor = budget * DECOR_PERCENTAGE;
    double extrasOutfitPrice = extras * priceForExtraOutfit;

    if (extras > DISCOUNT_THRESHOLD) {
        extrasOutfitPrice *= (1 - OUTFIT_DISCOUNT);
    }

    double totalCost = extrasOutfitPrice + decor;

    cout << fixed << setprecision(2);

    if (totalCost > budget) {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " <<  totalCost - budget << " leva more." << endl;
    } else {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget - totalCost << " leva left." << endl;
    }
}
