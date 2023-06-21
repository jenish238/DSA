#include <iostream>
using namespace std;
int main()
{

    int row;
    cout << "enter the Row" << endl;

    cin >> row;

    for (int i = 1; i <= row; i++)
    {

        for (int space = 0; space < ((row - i + 1)); space++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {

            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 1; i < row; i++)
    {

        for (int space = 0; space < ((row - i + 1)); space++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            if (k == 0 || k == (i - 1))
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
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int k = 0; k < ((row)); k++)
        {
            if (k == 0 || k == (row - 1 - i))
            {
                cout << " *";
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
        for (int j = 0; j < row - i; j++)
        {
            cout << "*";
        }
        for (int space = 0; space < ((2 * i) + 1); space++)
        {
            cout << " ";
        }
        for (int j = 0; j < row - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = row; i > 0; i--)
    {
        for (int j = 0; j < row - i + 1; j++)
        {
            cout << "*";
        }
        for (int space = 0; space < ((2 * i - 1)); space++)
        {
            cout << " ";
        }
        for (int j = 0; j < row - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < row + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j)
            {
                cout << i;
            }
            else
            {
                cout << i << "*";
            }
        }

        cout << endl;
    }

    for (int i = 1; i < row + 1; i++)
    {
        for (int j = row; j >= i; j--)
        {
            if (i == j)
            {
                cout << row - i;
            }
            else
            {
                cout << row - i << "*";
            }
        }

        cout << endl;
    }
}