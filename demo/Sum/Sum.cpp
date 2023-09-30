#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int maxSum;
	cin >> maxSum;

	int currSum = 0;

	while (currSum < maxSum) {
		int currNum;
		cin >> currNum;

		currSum += currNum;
	}

	cout << currSum << endl;

	return 0;
}
