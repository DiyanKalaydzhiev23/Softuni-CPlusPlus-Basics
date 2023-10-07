#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int combinations = 0;

	int start, end, magicNumber, sum;
	cin >> start >> end >> magicNumber;

	for (int firstNum = start; firstNum <= end; firstNum++) {
		for (int secondNum = start; secondNum <= end; secondNum++) {
			sum = firstNum + secondNum;
			combinations++;
			
			if (sum == magicNumber) {
				// combinations = (firstNum - start) * (end - start + 1) + (secondNum - start + 1);

				cout << 
					"Combination N:" << combinations << 
					" (" << firstNum << " + " << secondNum << " = " << sum << ")" 
				<< endl;

				return 0;
			}
		}
	}

	// combinations = (end - start + 1) * (end - start + 1);
	cout << combinations << " combinations - neither equals " << magicNumber << endl;

	return 0;
}
