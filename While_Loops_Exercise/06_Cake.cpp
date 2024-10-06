#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int length, width;
    cin >> length >> width;  // 10, 2

    int totalPieces = length * width;  // 10 * 2 => 20

    while (true) {
        string input;
        cin >> input; // int || STOP

        if (input == "STOP") {
            cout << totalPieces << " pieces are left." << endl;
            break;
        }

        int pieces = stoi(input); // "10" -> 10(int)
        totalPieces -= pieces;

        if (totalPieces < 0) {
            cout << "No more cake left! You need " << -totalPieces << " pieces more." << endl;
            break;
        }
    }

    return 0;
}
