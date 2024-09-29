#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cin >> n;

    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    for (int i = 0; i < n; i++) {
        int currentNum;
        cin >> currentNum;

        if (currentNum < 200) {
            p1++;
        } else if (currentNum < 400) {
            p2++;
        } else if (currentNum < 600) {
            p3++;
        } else if (currentNum < 800) {
            p4++;
        } else {
            p5++;
        }
    }

    double p1Percent = static_cast<double>(p1) / n * 100;
    double p2Percent = static_cast<double>(p2) / n * 100;
    double p3Percent = static_cast<double>(p3) / n * 100;
    double p4Percent = static_cast<double>(p4) / n * 100;
    double p5Percent = static_cast<double>(p5) / n * 100;

    cout << fixed << setprecision(2);
    cout << p1Percent << "%" << endl;
    cout << p2Percent << "%" << endl;
    cout << p3Percent << "%" << endl;
    cout << p4Percent << "%" << endl;
    cout << p5Percent << "%" << endl;

    return 0;
}

