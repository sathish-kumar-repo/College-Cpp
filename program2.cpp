// 2. Find our the greatest of three numbers
#include <iostream>
using namespace std;

int main()
{
    // Variables to store the three numbers
    double n1, n2, n3;

    // Input the three numbers
    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    cout << "Enter the third number: ";
    cin >> n3;

    // Find the greatest number
    double greatest;

    if (n1 >= n2 && n1 >= n3)
    {
        greatest = n1;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        greatest = n2;
    }
    else
    {
        greatest = n3;
    }

    // Output the greatest number
    cout << "The greatest number is: " << greatest << endl;

    // return 0;
}