#include <iostream>

using namespace std;

int main() {
    int length, width, height;
    cin >> length >> width >> height;

    double percentTaken;
    cin >> percentTaken;

    int tankVolume = width * height * length;
    double tankLiters = static_cast<double>(tankVolume) / 1000;
    double freeSpace = tankLiters - tankLiters * (percentTaken / 100);

    cout << freeSpace << endl;

    return 0;
}