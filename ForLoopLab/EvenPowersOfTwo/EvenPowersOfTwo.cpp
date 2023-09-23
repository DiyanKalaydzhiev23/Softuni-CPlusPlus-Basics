#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::pow;

int main() {
    const int numberToBePowered = 2;

    int numberOfPowers;
    cin >> numberOfPowers;

    for (int power = 0; power <= numberOfPowers; power += 2) {
        cout << pow(numberToBePowered, power) << endl;
    }

    return 0;
}
