#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main() {
    int vowelsSum = 0;

    string input; // hello
    getline(cin, input);

    for (char letter : input) {
        if (letter == 'a') {
            vowelsSum += 1;
        }
        else if (letter == 'e') {
            vowelsSum += 2;
        }
        else if (letter == 'i') {
            vowelsSum += 3;
        }
        else if (letter == 'o') {
            vowelsSum += 4;
        }
        else if (letter == 'u') {
            vowelsSum += 5;
        }
    }

    cout << vowelsSum << endl;
    
    return 0;
}