#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    int rows;
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        int num;
        cin >> num;

        if (num > maxNumber) {
            maxNumber = num;
        }

        if (num < minNumber) {
            minNumber = num;
        }
    }

    cout << "Max number: " << maxNumber << endl;
    cout << "Min number: " << minNumber << endl;
    
    return 0;
}