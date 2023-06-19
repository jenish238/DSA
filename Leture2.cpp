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
}