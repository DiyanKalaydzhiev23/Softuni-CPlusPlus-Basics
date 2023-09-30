#include <iostream>

using namespace std;

int main() {
    string name;
    cin >> name;

    //do {
    //    cout << "The name is: " << name << endl;
    //} while (name != "stop");

    while (true) {
        cout << "The name is: " << name << endl;

        continue;
        break;
    }

    cout << "End of program" << endl;

    return 0;
}