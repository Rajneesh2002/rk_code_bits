#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mn =INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((a[i] == a[j]) && (i != j))
            {
                mn = min(i, mn);
            }
        }
    }
    if(mn==INT16_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<mn+1;
    }

    return 0;
}