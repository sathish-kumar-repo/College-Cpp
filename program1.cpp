// 1. To calculate simple interest and compound interest

#include <iostream>
#include <cmath> // For pow() function

using namespace std;

int main()
{
    // Variables for input
    double p, r, n;

    // Input principal, rate of interest, and time
    cout << "Enter the principal amount: ";
    cin >> p;

    cout << "Enter the annual interest rate (in %): ";
    cin >> r;

    cout << "Enter the time (in years): ";
    cin >> n;

    // Calculate Simple Interest
    double SI = (p * r * n) / 100;

    // Calculate Compound Interest
    double CI = p * pow((1 + r / 100), n) - p;

    // Output the results
    cout << "\nSimple Interest: " << SI << endl;
    cout << "Compound Interest: " << CI << endl;

    // return 0;
}