#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    const double ONE_SQAURE_METER_PRICE = 7.61;
    const double DISCOUNT_PERCENT = 0.18;

    double sqare_meters_needed;
    cin >> sqare_meters_needed;

    double priceBeforeDiscount = sqare_meters_needed * ONE_SQAURE_METER_PRICE;
    double discount = priceBeforeDiscount * DISCOUNT_PERCENT;

    double finalPrice = priceBeforeDiscount - discount;

    cout << "The final price is : " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;
}