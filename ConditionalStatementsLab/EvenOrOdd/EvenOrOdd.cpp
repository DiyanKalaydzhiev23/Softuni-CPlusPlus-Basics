#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number;
    cin >> number;

    if (number % 2 == 0) {
        cout << "even" << endl;
    } 
    else {
        cout << "odd" << endl;
    }

    return 0;
}