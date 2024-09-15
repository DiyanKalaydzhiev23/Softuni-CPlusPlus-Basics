#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int time1, time2, time3;
    cin >> time1 >> time2 >> time3;

    int totalTime = time1 + time2 + time3;  // 35 + 45 + 44 => 124
    int minutes = totalTime / 60;  // 124(int) / 60(int) => 2(int)
    int seconds = totalTime % 60;  // 124(int) % 60(int) => 4(int);  4 because 60 fills to 120, remainder is 4

    // Solution 2
    cout << minutes << ':' << setw(2) << setfill('0') << seconds << endl;

// Solution 1
//    if (seconds < 10) {
//        cout << minutes << ":0" << seconds << endl;
//    } else {
//        cout << minutes << ":" << seconds << endl;
//    }

}
