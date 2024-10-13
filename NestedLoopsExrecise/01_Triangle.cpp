#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int currentNumber = 1;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << currentNumber << " ";
            currentNumber++;

            if (currentNumber > n) {
                return 0;
            }
        }

        cout << endl;
    }


    return 0;
}
