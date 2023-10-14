#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main() {
    string movieName;
    double movieRating;

    int moviesCount;
    cin >> moviesCount;
    cin.ignore();

    string minRatingMovie;
    string maxRatingMovie;

    double minRating = INT_MAX;
    double maxRating = INT_MIN;
    double ratingSum = 0;

    for (int movie = 1; movie <= moviesCount; movie++) {
        getline(cin, movieName);
        cin >> movieRating;
        cin.ignore();

        if (movieRating < minRating) {
            minRatingMovie = movieName;
            minRating = movieRating;
        }
        if (movieRating > maxRating) {
            maxRatingMovie = movieName;
            maxRating = movieRating;
        }

        ratingSum += movieRating;
    }
    
    cout.setf(ios::fixed);
    cout.precision(1);

    cout << maxRatingMovie << " is with highest rating: " << maxRating << endl;
    cout << minRatingMovie << " is with lowest rating: " << minRating << endl;  
    cout << "Average rating: " << ratingSum / moviesCount << endl;
}
