// 3. Display the elements of array in sort order

#include <iostream>

using namespace std;

int main()
{
    // Declare and initialize an array
    int arr[] = {10, 20, 30, 40, 50};
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the elements of the array
    cout << "The elements of the array are: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    // cout << endl;

    //     return 0;
}