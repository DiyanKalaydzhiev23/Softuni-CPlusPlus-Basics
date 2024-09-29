#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int openedTabs, salary;
    cin >> openedTabs >> salary;

    string websiteName;
    for (int i = 0; i < openedTabs; i++) {
        cin >> websiteName;

        if (websiteName == "Facebook") {
            salary -= 150;
        } else if (websiteName == "Instagram") {
            salary -= 100;
        } else if (websiteName == "Reddit") {
            salary -= 50;
        }

        if (salary <= 0) {
            cout << "You have lost your salary." << endl;
            return 0;
        }
    }

    cout << salary << endl;

    return 0;
}
