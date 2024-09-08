#include <iostream>
#include <iomanip>  // Needed for setprecision

using namespace std;

int main() {
    const double exchangeRate = 1.79549;

    double usd;
    cin >> usd;

    double lv = usd * exchangeRate;

//    cout.setf(ios::fixed);  Option 2
//    cout.precision(2);

    cout << fixed << setprecision(2) << lv;

    return 0;
}
