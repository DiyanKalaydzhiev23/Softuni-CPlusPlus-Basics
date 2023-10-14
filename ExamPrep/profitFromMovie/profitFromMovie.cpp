#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string movieName;
	getline(cin, movieName);

	int daysCount;
	cin >> daysCount;

	int ticketsCount;
	cin >> ticketsCount;

	double ticketPrice;
	cin >> ticketPrice;

	double percetageTax;
	cin >> percetageTax;

	double profitBeforeTax = daysCount * (ticketsCount * ticketPrice);
	double profitAfterTax = profitBeforeTax - (profitBeforeTax * (percetageTax / 100));

	cout << fixed << setprecision(2) << "The profit from the movie " << movieName << " is " << profitAfterTax << " lv." << endl;
}