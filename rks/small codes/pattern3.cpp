
//horizontal table

#include <iostream>
using namespace std;

int main()
{
    int col, row;
    cin >> col >> row;
    for (int i = 1; i <= row; i++)
    {
        if ((i == 1) || (i == row))
        {
            for (int j = 1; j <= col; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        else
        {
            for (int k = 1; k <= col; k++)
            {
                if ((k == 1) || (k == col))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
