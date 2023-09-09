#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << num1 << endl;
    }
    else {
        cout << num2 << endl;
    }

    return 0;
}