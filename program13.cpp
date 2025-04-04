// Alternative program for program 5

#include <iostream>

using namespace std;

class MyClass
{
private:
    int data;

public:
    void setData(int value)
    {
        data = value;
    }

    void printData()
    {
        cout << "Data: " << data << endl;
    }
};

int main()
{
    MyClass obj;
    obj.setData(10);
    obj.printData();

    return 0;
}
