// Sum of digits

#include <iostream>

using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10; // Extract last digit and add to sum
        n /= 10;       // Remove last digit
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Please enter a positive number." << endl;
    }
    else
    {
        cout << "Sum of digits: " << sumOfDigits(num) << endl;
    }

    return 0;
}