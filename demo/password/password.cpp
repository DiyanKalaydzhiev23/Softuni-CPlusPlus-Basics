#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string username;
    cin >> username;

    string password;
    cin >> password;

    string inputPassword;
    cin >> inputPassword;

    while (inputPassword != password) {
        cin >> inputPassword;
    }

    cout << "Welcome " << username << "!" << endl;

    return 0;
}
