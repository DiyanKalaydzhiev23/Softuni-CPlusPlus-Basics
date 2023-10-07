#include <iostream>

using namespace std;

int main() {
    bool flag = false;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 1 && i == 1) {
                flag = true;
                break;
            }

            cout << "i: " << i << "j: " << j << endl;
        }

        if (flag) {
            break;
        }
    }
}
