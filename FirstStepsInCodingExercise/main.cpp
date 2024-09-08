#include <iostream>

using namespace std;

int main() {
    const double priceForSqNylon = 1.50;
    const double priceForLiterPaint = 14.50;
    const double priceForThinnerLiter = 5;
    const double priceForBags = 0.40;

    const double assurePaintPercent = 1.10;
    const double assureNylonSq = 2;

    const double workersCutForOneHourPercent = 0.30;

    double nylonCount, paintLiters, thinnerLiters;
    cin >> nylonCount >> paintLiters >> thinnerLiters;

    double workersHours;
    cin >> workersHours;

    double totalPriceNylon = (nylonCount + assureNylonSq) * priceForSqNylon;
    double totalPricePaint = (paintLiters * assurePaintPercent) * priceForLiterPaint;
    double totalPriceThinner = thinnerLiters * priceForThinnerLiter;
    double totalPriceMaterials = totalPriceNylon + totalPricePaint + totalPriceThinner + priceForBags;

    double workersPayAmountForOneHour = workersCutForOneHourPercent * totalPriceMaterials;
    double workersTotalPay = workersPayAmountForOneHour * workersHours;

    double totalPrice = workersTotalPay + totalPriceMaterials;

    cout << totalPrice << endl;

    return 0;
}