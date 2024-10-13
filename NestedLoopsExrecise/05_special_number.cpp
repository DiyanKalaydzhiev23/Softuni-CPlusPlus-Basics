#include <iostream>

using namespace std;

int main() {
    int n;  // 3
    cin >> n;

    for (int i = 1111; i <= 9999; i++) {
        int num = i;
        bool isSpecial = true;

        while (num > 0) {
            int digit = num % 10; // 1234 % 10 => 4

            if (digit == 0 || n % digit != 0) {
                isSpecial = false;
                break;
            }

            num /= 10;  // 1234 => 123
        }

        if (isSpecial) {
            cout << i << " ";
        }
    }


    return 0;
}
