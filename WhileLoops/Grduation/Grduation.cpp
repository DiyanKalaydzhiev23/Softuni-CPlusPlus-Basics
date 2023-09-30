#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main() {
    string name;
    cin >> name;

    int yearInSchool = 1;
    double sumGrades = 0;
    bool failedOnce = false;

    while (yearInSchool <= 12) {
        double grade;
        cin >> grade;

        if (grade < 4) {
            if (failedOnce) {
                cout << name << " has been excluded at " << yearInSchool << " grade" << endl;
                return 0;
            }
            else {
                failedOnce = true;
                continue;
            }
        }

        sumGrades += grade;
        yearInSchool += 1;
    }

    double avgGrade = sumGrades / 12;

    cout << name << " graduated. Average grade: " << fixed << setprecision(2) << avgGrade << endl;
    
    return 0;
}
