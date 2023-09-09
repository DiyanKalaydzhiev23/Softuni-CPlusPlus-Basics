#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    const string REAL_PASSWORD = "s3cr3t!P@ssw0rd";

    string passwordInput;
    cin >> passwordInput;

    if (passwordInput == REAL_PASSWORD) {
        cout << "Welcome" << endl;
    }
    else {
        cout << "Wrong password!";
    }

    return 0;
}