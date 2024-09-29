#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numGroups;
    cin >> numGroups;

    int musala = 0, montBlanc = 0, kilimanjaro = 0, k2 = 0, everest = 0;
    int totalClimbers = 0;
    int groupSize;

    for (int group = 0; group < numGroups; group++) {
        cin >> groupSize;
        totalClimbers += groupSize;

        if (groupSize < 6) {
            musala += groupSize;
        } else if (groupSize < 13) {
            montBlanc += groupSize;
        } else if (groupSize < 26) {
            kilimanjaro += groupSize;
        } else if (groupSize < 41) {
            k2 += groupSize;
        } else {
            everest += groupSize;
        }
    }

    cout << fixed << setprecision(2);
    cout << static_cast<double>(musala) / totalClimbers * 100 << "%" << endl;
    cout << static_cast<double>(montBlanc) / totalClimbers * 100 << "%" << endl;
    cout << static_cast<double>(kilimanjaro) / totalClimbers * 100 << "%" << endl;
    cout << static_cast<double>(k2) / totalClimbers * 100 << "%" << endl;
    cout << static_cast<double>(everest) / totalClimbers * 100 << "%" << endl;

    return 0;
}
