#include <iostream>

using std::cout;
using std::endl;

int main() {
    const int MAX_NUMBER = 10;

    for (int leftNum = 1; leftNum <= MAX_NUMBER; leftNum++) {
        for (int rightNum = 1; rightNum <= MAX_NUMBER; rightNum++) {
            cout << leftNum << " * " << rightNum << " = " << leftNum * rightNum << endl;
        }
    }
}
