#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = n / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i < p + 1)
        {
            for (int j = 1; j <= n; j++)
            {
                int k = i + j;
                if ((i >= j) || (k >= n + 1))
                {
                    cout << "  *  ";
                }
                else
                {
                    cout << "     ";
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                int k = i + j;
                if ((i <= j) || (k <= n + 1))
                {
                    cout << "  *  ";
                }
                else
                {
                    cout << "     ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}

/*
int n = 8;
    for (int i = 1; i <= n; i++)
    {
        if (i < 5)
        {
            for (int j = 1; j <= 8; j++)
            {
                int k = i + j;
                if ((i >= j) || (k >= 9))
                {
                    cout << "  *  ";
                }
                else
                {
                    cout << "     ";
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= 8; j++)
            {
                int k = i + j;
                if ((i <= j) || (k <= 9))
                {
                    cout << "  *  ";
                }
                else
                {
                    cout << "     ";
                }
            }
            cout << endl;
        }
    }
    */