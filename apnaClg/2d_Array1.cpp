#include<iostream>
using namespace std;                  //2D array declaration
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0;j<m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"The required matrix is:"<<endl;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0;j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }

    
    return 0;

}