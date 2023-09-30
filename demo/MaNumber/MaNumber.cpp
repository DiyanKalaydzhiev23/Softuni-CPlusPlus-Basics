#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int maxNumber = INT_MIN;
    int num;

    while (true) {
        if (!(cin >> num)) { // fallbit; you can check it with cin.fail()
            break;
        }

        if (maxNumber < num) {
            maxNumber = num;
        }
    }

    cout << maxNumber << endl;

    return 0;
}
