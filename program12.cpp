// C++ Program for Matrix Multiplication

#include <iostream>

using namespace std;

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible! (Columns of first matrix must be equal to rows of second matrix)" << endl;
        return 0;
    }

    int A[10][10], B[10][10], product[10][10] = {0};

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Product of matrices:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
