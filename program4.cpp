// 4. Fibonacci series

#include <iostream>

using namespace std;

int main()
{
    int n; // Number of terms in the Fibonacci series

    // Ask the user for the number of terms
    cout << "Enter the number of terms: ";
    cin >> n;

    // Initialize the first two terms of the Fibonacci series
    int first = 0, second = 1;

    // Display the Fibonacci series
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";
        int next = first + second; // Calculate the next term
        first = second;            // Update first term
        second = next;             // Update second term
    }
    // cout << endl;

    //     return 0;
}