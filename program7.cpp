// Write a program to implement constructor

#include <iostream>
// #include <conio.h>

using namespace std;

class Student
{
private:
    int sno;
    int m1, m2;

public:
    Student(int x, int y, int z)
    {
        sno = x;
        m1 = y;
        m2 = z;
    }
    void getdata()
    {
        cout << sno << endl;
        cout << m1 << endl;
        cout << m2;
    }
};

int main()
{
    int x, y, z;
    // clrscr();

    cout << "Enter three values:";
    cin >> x >> y >> z;

    Student s(x, y, z);
    s.getdata();

    // getch();

    // return 0;
}