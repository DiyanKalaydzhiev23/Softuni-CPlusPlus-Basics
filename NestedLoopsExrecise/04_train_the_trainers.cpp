#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int jury;
    cin >> jury;

    string presentation;
    double totalSum = 0;
    int totalCount = 0;

    while (true) {
        cin.ignore();
        getline(cin, presentation);

        if (presentation == "Finish") {
            break;
        }

        double sumGrades = 0;  // 6 + 5.50 => 11.50
        for (int i = 0; i < jury; i++) {
            double grade;
            cin >> grade;

            sumGrades += grade;
        }

        double averageGrade = sumGrades / jury;  // 11.50 / 2 => 5.75
        totalSum += sumGrades;
        totalCount += jury;

        cout << presentation << " - " << fixed << setprecision(2) << averageGrade << "." << endl;
    }

    double finalAssessment = totalSum / totalCount;
    cout << fixed << setprecision(2) << "Student's final assessment is " << finalAssessment << "." << endl;

    return 0;
}