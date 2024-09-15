#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
    string seriesName;
    getline(cin, seriesName);

    double episodeDuration, breakDuration;
    cin >> episodeDuration >> breakDuration;

    double lunchTime = breakDuration / 8;
    double relaxTime = breakDuration / 4;

    double remainingTime = breakDuration - (lunchTime + relaxTime);

    if (remainingTime >= episodeDuration) {
        cout
            << "You have enough time to watch "
            << seriesName
            << " and left with "
            << ceil(remainingTime - episodeDuration)
            << " minutes free time."
        << endl;
    } else {
        cout
            << "You don't have enough time to watch "
            << seriesName
            <<  ", you need "
            << ceil(episodeDuration - remainingTime)
            << " more minutes."
        << endl;
    }

    return 0;
}
