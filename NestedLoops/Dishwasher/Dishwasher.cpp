#include <iostream>
#include <string>

using namespace std;

int main() {
    
    const int DETERGENT_FOR_POT = 15;
    const int DETERGENT_FOR_DISH = 5;
    const int BOTTLE_OF_DETERGENT = 750;

    int detergentBottles;
    cin >> detergentBottles;

    int detergentMilliliters = detergentBottles * BOTTLE_OF_DETERGENT;

    int washedDishes = 0;
    int washedPots = 0;
    int usedDetergent = 0;
    int counter = 0;

    string command;

    while (cin >> command && command != "End") {
        int dishesCount = stoi(command);
        
        counter++;

        if (counter % 3 == 0) {
            washedPots += dishesCount;
            usedDetergent += dishesCount * DETERGENT_FOR_POT;
        }
        else {
            washedDishes += dishesCount;
            usedDetergent += dishesCount * DETERGENT_FOR_DISH;
        }

        if (usedDetergent > detergentMilliliters) {
            int neededDetergent = usedDetergent - detergentMilliliters;
            cout << "Not enough detergent, " << neededDetergent << " ml. more necessary!" << endl;
            return 0;
        }
    }

    cout << "Detergent was enough!" << endl;
    cout << washedDishes << " dishes and " << washedPots << " pots were washed." << endl;
    cout << "Leftover detergent " <<  detergentMilliliters - usedDetergent << " ml." << endl;

    return 0;
}
