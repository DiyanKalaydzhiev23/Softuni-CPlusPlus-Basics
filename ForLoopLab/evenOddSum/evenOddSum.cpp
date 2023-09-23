#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::abs;

int main() {
	int evenSum = 0;
	int oddSum = 0;

	int rows;
	cin >> rows;

	for (int row = 1; row <= rows; row++) {
		int num;
		cin >> num;

		if (row % 2 == 0) {
			evenSum += num;
		}
		else {
			oddSum += num;
		}
	}
	
	if (evenSum == oddSum) {
		cout << "Yes" << endl;
		cout << "Sum = " << evenSum << endl;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << abs(oddSum - evenSum) << endl;
	}

	return 0;
}
