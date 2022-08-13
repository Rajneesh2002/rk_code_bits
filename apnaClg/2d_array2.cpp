#include <iostream>
using namespace std;                        // checking whether key is present or not
int main()
{
    int n, m, key;
    cin >> n >> m >> key;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool p = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == key)
            {
                p = true;
            }
        }
    }
    if (p)
    {
        cout << "Element found.";
    }
    else
    {
        cout << "Element not found.";
    }

    return 0;
}