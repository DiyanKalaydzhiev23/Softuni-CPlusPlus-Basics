#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int GOAL = 10000;

    int totalSteps = 0;
    string steps;

    while (true) {
        getline(cin, steps);  // int || "Going home"

        if (steps == "Going home") {
            cin >> steps;  // steps home

            totalSteps += stoi(steps);  // "100"(string) -> 100(int)

            if (totalSteps >= GOAL) {
                cout << "Goal reached! Good job!" << endl;
                break;
            } else {
                cout << (GOAL - totalSteps) << " more steps to reach goal." << endl;
            }

            break;
        }

        totalSteps += stoi(steps);  // "100"(string) -> 100(int)

        if (totalSteps >= GOAL) {
            cout << "Goal reached! Good job!" << endl;
            break;
        }
    }

    return 0;
}