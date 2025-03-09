// Displaying temperature in Celsius
// Write a C++ program to display the temperatue in Celsius using friend function

#include <iostream>

using namespace std;

class Temperature
{
    int celsius;

public:
    Temperature()
    {
        celsius = 0;
    }

    // declaring friend function
    friend int temp(Temperature);
};

// friend function definition
int temp(Temperature t)
{
    t.celsius = 40;
    return t.celsius;
}

int main()
{
    Temperature tm;
    cout << "Temperature in celsius : " << temp(tm) << endl;
    // return 0;
}
