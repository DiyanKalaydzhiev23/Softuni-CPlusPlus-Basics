#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main() {

    int countNumbers;
    cin >> countNumbers;

    int maxValue = INT_MIN;
    int totalSum = 0;

    for (int i = 0; i < countNumbers; i++) {
        int currentNumber;
        cin >> currentNumber;

        totalSum += currentNumber;

        if (currentNumber > maxValue) {
            maxValue = currentNumber;
        }
    }

    totalSum -= maxValue; // 4 + 1 + 3 => maxNum = 4; sum = 8; sum = 8 - 4 => 4

    if (maxValue == totalSum) {
        cout << "Yes" << endl;
        cout << "Sum = " << totalSum << endl;
    } else {
        int diff = abs(maxValue - totalSum); // 9 - 11 => |-2| => 2
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    return 0;
}
