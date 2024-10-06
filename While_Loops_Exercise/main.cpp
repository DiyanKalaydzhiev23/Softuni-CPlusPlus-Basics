#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int length, height, width;
    cin >> length >> height >> width;

    int availableVolume = length * width * height;

    while (true) {
        string input;
        cin >> input;  // "Done" || int

        if (input == "Done") {
            cout << availableVolume << " Cubic meters left." << endl;
            break;
        }

        int boxes = stoi(input);
        availableVolume -= boxes;

        if (availableVolume < 0) {
            cout << "No more free space! You need " << -availableVolume << " Cubic meters more." << endl;
            break;
        }
    }

    return 0;
}
