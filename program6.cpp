#include <iostream>
// #include <conio>

using namespace std;

class Student
{
private:
    int sno;
    int m1, m2;

public:
    void getdata()
    {
        cin >> sno;
        cin >> m1;
        cin >> m2;
    }
    void putdata()
    {
        cout << sno << endl;
        cout << m1 << endl;
        cout << m2 << endl;
    }
};

int main()
{
    Student s;
    s.getdata();
    s.putdata();
}