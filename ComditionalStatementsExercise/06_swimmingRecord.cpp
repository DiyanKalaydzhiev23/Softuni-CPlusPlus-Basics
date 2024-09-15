#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const double SECONDS_DELAY = 12.5;
    const double METERS_DELAY_THRESHOLD = 15;

    double recordInSeconds, distanceInMeters, secondsPerMeter;
    cin >> recordInSeconds >> distanceInMeters >> secondsPerMeter;

    double swimTimeWithoutDelay = distanceInMeters * secondsPerMeter; // 50 * 2 => 100
    double resistanceDelay = floor(distanceInMeters / METERS_DELAY_THRESHOLD) * SECONDS_DELAY; // (50 / 15)(int)  * 12.5
    double totalTime = swimTimeWithoutDelay + resistanceDelay;

    cout << fixed << setprecision(2);

    if (totalTime < recordInSeconds) {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    } else {
        cout << "No, he failed! He was " << totalTime - recordInSeconds << " seconds slower." << endl;
    }

    return 0;
}
