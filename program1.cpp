#include <iostream>
#include <cmath> // For pow() function

using namespace std;

int main()
{
    // Variables for input
    double principal, rate, time;

    // Input principal, rate of interest, and time
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;

    cout << "Enter the time (in years): ";
    cin >> time;

    // Calculate Simple Interest
    double simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    double compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Output the results
    cout << "\nSimple Interest: " << simpleInterest << endl;
    cout << "Compound Interest: " << compoundInterest << endl;

    // return 0;
}