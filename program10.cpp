#include <iostream>

using namespace std;

int sumofdigit(int num1 = 1234) // Function now returns an int
{
    int r, sum = 0;
    while (num1 > 0)
    {
        r = num1 % 10;
        num1 = num1 / 10;
        sum = sum + r;
    }
    return sum; // Return sum instead of printing inside function
}

int main()
{
    cout << "\n\n Find the sum of digits of a given number:\n";
    cout << "----------------------------------------------\n";
    int num = 1234;               // Define the number
    int result = sumofdigit(num); // Store the returned sum

    cout << " The sum of digits of " << num << " is: " << result << endl;
    return 0; // Return 0 to indicate successful execution
}