#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string speedInText;

    double speed;
    cin >> speed;

    if (speed <= 10) {
        speedInText = "slow";
    }
    else if (speed <= 50) {
        speedInText = "average";
    }
    else if (speed <= 150) {
        speedInText = "fast";
    }
    else if (speed <= 1000) {
        speedInText = "ultra fast";
    }
    else {
        speedInText = "extremely fast";
    }

    cout << speedInText << endl;

    return 0;
}