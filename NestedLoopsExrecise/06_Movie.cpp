#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string movie;

    int studentTickets = 0;
    int standardTickets = 0;
    int kidsTickets = 0;

    while (true) {
        getline(cin, movie);

        if (movie == "Finish") {
            break;
        }

        int freeSeats;
        cin >> freeSeats;

        int ticketsSold = 0;

        while (ticketsSold < freeSeats) {
            string typeTicket;
            cin >> typeTicket;

            if (typeTicket == "End") {
                break;
            }

            ticketsSold++;

            if (typeTicket == "student") {
                studentTickets++;
            } else if (typeTicket == "standard") {
                standardTickets++;
            } else if (typeTicket == "kid") {
                kidsTickets++;
            }
        }

        double percentageFull = static_cast<double>(ticketsSold) / freeSeats * 100;
        cout << fixed << setprecision(2);
        cout << movie << " - " << percentageFull << "% full." << endl;

        cin.ignore();
    }

    int totalTickets = standardTickets + studentTickets + kidsTickets;

    cout << "Total tickets: " << totalTickets << endl;
    cout << fixed << setprecision(2);
    cout << static_cast<double>(studentTickets) / totalTickets * 100 << "% student tickets." << endl;
    cout << static_cast<double>(standardTickets) / totalTickets * 100 << "% standard tickets." << endl;
    cout << static_cast<double>(kidsTickets) / totalTickets * 100 << "% kids tickets." << endl;

    return 0;
}
