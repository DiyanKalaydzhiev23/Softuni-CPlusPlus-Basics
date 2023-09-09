#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    string shape;
    cin >> shape;

    double area;

    if (shape == "square") {
        double sideA;
        cin >> sideA;

        area = sideA * sideA;
    }
    else if (shape == "rectangle") {
        double sideA, sideB;
        cin >> sideA >> sideB;

        area = sideA * sideB;
    }
    else if (shape == "circle") {
        double radius;
        cin >> radius;

        area = M_PI * pow(radius, 2);
    }
    else if (shape == "triangle") {
        double a, ha;
        cin >> a >> ha;

        area = a * ha / 2;
    }

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << area << endl;
}
