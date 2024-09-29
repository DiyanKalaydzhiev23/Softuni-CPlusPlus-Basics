#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
    int tournamentsCount, startingPoints;
    cin >> tournamentsCount >> startingPoints;

    int pointsEarned = 0;
    int tournamentsWon = 0;

    string stage;
    for (int tournament = 0; tournament < tournamentsCount; tournament++) {
        cin >> stage; // W F SF

        if (stage == "W") {
            pointsEarned += 2000;
            tournamentsWon++;
        } else if (stage == "F") {
            pointsEarned += 1200;
        } else if (stage == "SF") {
            pointsEarned += 720;
        }
    }

    int totalPoints = startingPoints + pointsEarned; // 1400 + 6640 => 8040
    int averagePoints = pointsEarned / tournamentsCount; // 6640 / 5 => 1328
    double winsPercentage = (static_cast<double>(tournamentsWon) / tournamentsCount) * 100; // 2 / 5 => 0.4 * 100 => 40%

    cout << "Final points: " << totalPoints << endl;
    cout << "Average points: " << averagePoints << endl;
    cout << fixed << setprecision(2) << winsPercentage << "%" << endl;

    return 0;
}
