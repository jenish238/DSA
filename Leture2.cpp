#include <iostream>
using namespace std;
int main()
{
    // int n = 5;
    // if (cin >> n)
    // {
    //     cout << cin << endl;
    // }

    int row;
    cout << "enter the row Number :-" << endl;
    cin >> row;

    int col;
    cout << "enter the colum :-" << endl;
    cin >> col;
    for (size_t i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            if (i == 0 || i == row || j == 0 || j == col)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = row; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "New patten" << endl;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < row - i; j++)
        {
            cout << row - i;
        }

        cout << endl;
    }

    cout << "new Patten code for Full Pyamid" << endl;
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= (row * 2) - 1; j++)
        {

            for (int space = 0; space < ((row - i + 1)); space++)
            {
                cout << "  ";
            }
            for (int k = 0; k < ((row + i)); k++)
            {

                cout << "* ";
            }
        }

        cout << endl;
    }
}