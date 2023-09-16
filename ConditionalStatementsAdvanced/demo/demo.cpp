#include <iostream>

using namespace std;

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {

    int number = 10;

    bool isValid = (number > 10) && (number % 2 == 0);

    if (!isValid) {
        cout << "Invalid" << endl;
    }

}
