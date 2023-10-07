#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int solutions = 0;
    int n;
    cin >> n;

    // solutions = (n + 2) * (n + 1) / 2;

    for (int x1 = 0; x1 <= n; x1++) {
        for (int x2 = 0; x2 <= n; x2++) {
            for (int x3 = 0; x3 <= n; x3++) {
                if (x1 + x2 + x3 == n) {
                    solutions++;
                }
            }
        }
    }

    cout << solutions << endl;
}
