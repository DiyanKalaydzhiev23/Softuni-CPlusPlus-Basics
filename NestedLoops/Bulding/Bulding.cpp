#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int floors, rooms;  // 6, 4
    cin >> floors >> rooms;

    for (int floor = floors; floor > 0; floor--) {
        for (int room = 0; room < rooms; room++) {
            if (floor == floors) {
                cout << "L" << floor << room << " ";
            }
            else if (floor % 2 == 0) {
                cout << "O" << floor << room << " ";
            }
            else {
                cout << "A" << floor << room << " ";
            }
        }

        cout << endl;
    }
}
