#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string input;  // int || stop
    long long primeSum = 0;
    long long nonPrimeSum = 0;

    while (true) {
        cin >> input;

        if (input == "stop") {
            break;
        }

        int number = stoi(input);

        if (number < 0) {
            cout << "Number is negative." << endl;
            continue;
        }

        bool isPrime = true;
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primeSum += number;
        } else {
            nonPrimeSum += number;
        }
    }

    cout << "Sum of all prime numbers is: " << primeSum << endl;
    cout << "Sum of all non prime numbers is: " << nonPrimeSum << endl;

    return 0;
}
