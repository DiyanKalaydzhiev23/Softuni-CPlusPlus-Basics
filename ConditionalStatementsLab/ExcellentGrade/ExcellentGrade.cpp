#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    const double EXCELLENT_GRADE_MINIMUM = 5.50;

    double grade;
    cin >> grade;

    if (grade >= EXCELLENT_GRADE_MINIMUM) {
        cout << "Excellent!" << endl;
    }

    return 0;
}