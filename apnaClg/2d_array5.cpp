#include <iostream>
using namespace std;           //matrix multiplication
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    cout << "enter elements of a:" << endl;
    int a[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter elements of b:" << endl;
    int b[n2][n3];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> b[i][j];
        }
    }
    int c[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            c[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "matrix after multiplication:" << endl;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
