#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    const int MIN_UNPLEASING_GRADE_VALUE = 4;

    int maxUnpleasingGrades;
    cin >> maxUnpleasingGrades;

    int currentGrade, totalTasks = 0, unpleasingGrades = 0;
    double totalGradesSum = 0;

    string taskName, lastTaskName;

    while (true) {
        cin.ignore();
        getline(cin, taskName);

        if (taskName == "Enough") {
            cout << "Average score: " << fixed << setprecision(2) << (totalGradesSum / totalTasks) << endl;
            cout << "Number of problems: " << totalTasks << endl;
            cout << "Last problem: " << lastTaskName << endl;
            break;
        }

        cin >> currentGrade;

        totalTasks++;
        totalGradesSum += currentGrade;
        lastTaskName = taskName;

        if (currentGrade <= MIN_UNPLEASING_GRADE_VALUE) {
            unpleasingGrades++;

            if (unpleasingGrades == maxUnpleasingGrades) {
                cout << "You need a break, " << unpleasingGrades << " poor grades." << endl;
                break;
            }
        }
    }

    return 0;
}
