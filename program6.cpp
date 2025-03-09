// Write a program to implement function over loading

#include <iostream>
// #include <conio.h>

using namespace std;

int sum(int a, int b)
{
    return (a + b);
}

int sum(int a, int b, int c)
{
    return (a + b + c);
}

int main()
{
    int a, b, c;
    // clrscr();

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Sum = " << sum(a, b) << endl;
    cout << "Sum = " << sum(a, b, c) << endl;

    // getch();

    // return 0;
}