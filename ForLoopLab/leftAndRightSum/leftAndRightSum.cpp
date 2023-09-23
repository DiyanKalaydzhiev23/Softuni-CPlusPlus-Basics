#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::abs;

int main() {
    int leftSum = 0;
    int rightSum = 0;
    
    int rows;
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        int num;
        cin >> num;

        leftSum += num;
    }

    for (int row = 1; row <= rows; row++) {
        int num;
        cin >> num;

        rightSum += num;
    }

    if (leftSum == rightSum) {
        cout << "Yes, sum = " << leftSum << endl;
    }
    else {
        cout << "No, diff = " << abs(leftSum - rightSum) << endl;
    }

    return 0;
}
