#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int maxNum;
    cin >> maxNum;

    int currNum = 1;

    while (currNum <= maxNum) {
        cout << currNum << endl;
        currNum = (currNum * 2) + 1;
    }
}
