#include <iostream>

using namespace std;

int main() {
	bool isRaning = true;
	bool isSunny = true;

	if (isRaning) {
		cout << "its rainy" << isRaning << endl;
	}
	else if (isSunny) {
		cout << "its sunny" << endl;
	}
	else {
		cout << "its cloudy" << endl;
	}

	cout << "End of program" << endl;
}