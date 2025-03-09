// 5. Write a c++ program to create a class and access member fuction of a class
#include <iostream>
#include <string>

using namespace std;

class MyClass
{
private:
    string name;

public:
    MyClass(string n)
    {
        name = n;
    }

    void greet()
    {
        cout << "Hello, " << name << "!" << endl;
    }
};

int main()
{

    MyClass myObject("mku college");

    myObject.greet();

    //     return 0;
}