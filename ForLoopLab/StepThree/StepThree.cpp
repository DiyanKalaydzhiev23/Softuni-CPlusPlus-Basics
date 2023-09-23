#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    const int STEP = 3;

    int endNum;
    cin >> endNum;
     
    for (int num = 1; num <= endNum; num += STEP) {
        cout << num << endl;
    }

    return 0;
}