#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int startNum;
    cin >> startNum;

    for (int num = startNum; num >= 1; --num) {
        cout << num << endl;
    }

    return 0;
}