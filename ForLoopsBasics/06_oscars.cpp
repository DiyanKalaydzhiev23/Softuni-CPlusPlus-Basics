#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
    const double NEEDED_POINTS = 1250.5;

    string actorName;
    double initialPoints;
    int countJudges;

    getline(cin, actorName);
    cin >> initialPoints >> countJudges;

    double totalPoints = initialPoints;

    string judgeName;
    double judgePoints;

    for (int judge = 0; judge < countJudges; judge++) {
        cin.ignore();
        getline(cin, judgeName);
        cin >> judgePoints;

        totalPoints += (static_cast<double>(judgeName.length()) * judgePoints) / 2;

        if (totalPoints > NEEDED_POINTS) {
            cout
                    << "Congratulations, "
                    << actorName << " got a nominee for leading role with "
                    << fixed << setprecision(1) << totalPoints << "!" <<
                    endl;
            return 0;
        }
    }

    cout
            << "Sorry, " << actorName << " you need "
            << fixed << setprecision(1)
            << NEEDED_POINTS - totalPoints << " more!" <<
            endl;

    return 0;
}
