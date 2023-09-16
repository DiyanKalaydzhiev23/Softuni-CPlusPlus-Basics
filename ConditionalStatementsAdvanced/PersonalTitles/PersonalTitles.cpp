#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    double age;
    char gender;
    string title;

    cin >> age;
    cin >> gender;

    if (gender == 'm') {
        if (age >= 16) {
            title = "Mr.";
        }
        else {
            title = "Master";
        }
    }
    else if (gender == 'f') {
        if (age >= 16) {
            title = "Ms.";
        }
        else {
            title = "Miss";
        }
    }

    cout << title << endl;

    return 0;
}
