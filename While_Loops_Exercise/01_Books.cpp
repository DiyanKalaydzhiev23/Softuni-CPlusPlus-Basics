#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string desiredBook;
    getline(cin, desiredBook);

    string currentBook;
    int checkedBooks = 0;

    while (true) {
        getline(cin, currentBook);

        if (currentBook == desiredBook) {
            cout << "You checked " << checkedBooks << " books and found it."   << endl;
            break;
        }

        if (currentBook == "No More Books") {
            cout << "The book you search is not here!" << endl;
            cout << "You checked " << checkedBooks << " books." << endl;
            break;
        }

        checkedBooks++;
    }

    return 0;
}
