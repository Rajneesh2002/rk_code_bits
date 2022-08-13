#include <iostream>
using namespace std;     //searching key in sorted matrix
int main()
{
    int n, m, key;
    cin >> n >> m >> key;
    int a[n][m];

    cout<<"enter matrix:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool p = false;
    int r = 0;
    int c = n - 1;
    while (r < n && c >= 0)
    {
        if (a[r][c] == key)
        {
            p = true;
        }
        if (a[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if(p){
        cout<<"Key found";
    }
    else{
        cout<<"key not found";
    }

    return 0;
}