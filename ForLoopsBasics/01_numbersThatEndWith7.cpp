#include <iostream>

using namespace std;

int main() {

    // Solution 1
    for (int num = 1; num <= 1000; num++) {
        if (num % 10 == 7) {
            cout << num << endl;
        }
    }

    // Solution 2
    for (int num = 7; num <= 1000; num += 10) {
        cout << num << endl;
    }

    return 0;
}
