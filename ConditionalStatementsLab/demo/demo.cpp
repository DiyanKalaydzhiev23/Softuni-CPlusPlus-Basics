#include <iostream>

using namespace std;

int main() {
	double degrees;
	cin >> degrees;

	string tempratureInText = "unknown";

	if (degrees >= 5 && degrees <= 11.9) {
		tempratureInText = "Cold";
	}
	else if (degrees >= 12 && degrees <= 14.9) {
		tempratureInText = "Cool";
	}
	else if (degrees >= 15 && degrees <= 20) {
		tempratureInText = "Mild";
	}
	else if (degrees >= 20.1 && degrees <= 25.9) {
		tempratureInText = "Warm";
	}
	else if (degrees >= 26 && degrees <= 35) {
		tempratureInText = "Hot";
	}

	cout << tempratureInText << endl;

	return 0;
}