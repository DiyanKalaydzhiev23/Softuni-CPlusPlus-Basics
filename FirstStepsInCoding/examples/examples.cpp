#include <iostream>

using namespace std;

int main() {
	double num = 5.666666;

	cout.setf(ios::fixed);
	cout.precision(3);

	cout << num;
}