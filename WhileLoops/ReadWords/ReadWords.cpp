#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string input;
    cin >> input;

    while (input != "Stop") {
        cout << input << endl;
        cin >> input;
    }

    return 0;
}
