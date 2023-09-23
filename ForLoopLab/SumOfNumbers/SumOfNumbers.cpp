#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int sum = 0;

    int rows;
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        int num;
        cin >> num;

        sum += num;
    }

    cout << sum << endl;

    return 0;
}
