#include <iostream>

using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        int num = i;
        int position = 1;
        int oddSum = 0, evenSum = 0;

        while (num > 0) {
            int digit = num % 10;  // 100 012 % 10 => 2 (единица)

            if (position % 2 == 0) {
                evenSum += digit;
            } else {
                oddSum += digit;
            }

            position++;
            num /= 10;  // (int)100 012 / (int)10 => (int) 10 001
        }

        if (evenSum == oddSum) {
            cout << i << " ";
        }
    }

    return 0;
}
