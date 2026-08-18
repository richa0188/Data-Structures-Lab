#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter the elements of matrix:" << endl;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    // Sum of every row
    cout << "Sum of every row:" << endl;

    for(int i = 0; i < rows; i++)
    {
        int sum = 0;

        for(int j = 0; j < cols; j++)
        {
            sum = sum + a[i][j];
        }

        cout << "Row " << i + 1 << " = " << sum << endl;
    }

    // Sum of every column
    cout << "Sum of every column:" << endl;

    for(int j = 0; j < cols; j++)
    {
        int sum = 0;

        for(int i = 0; i < rows; i++)
        {
            sum = sum + a[i][j];
        }

        cout << "Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}