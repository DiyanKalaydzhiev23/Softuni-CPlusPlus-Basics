#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    const double DOGS_FOOD_PRICE = 2.50;
    const int CATS_FOOD_PRICE = 4;

    int dogsFoodCount, catsFoodCount;
    
    cin >> dogsFoodCount;
    cin >> catsFoodCount;

    double finalPrice = 
        dogsFoodCount * DOGS_FOOD_PRICE
            + 
        catsFoodCount * CATS_FOOD_PRICE;

    cout << finalPrice << " lv." << endl;
}
