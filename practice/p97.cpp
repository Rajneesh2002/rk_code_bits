#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll c = 0;
    for (ll i = n - 2; i > -1; i--)
    {
        while (a[i + 1] <= a[i] && a[i])
        {
            a[i] /= 2;
            c++;
        }
    }
    bool flag = false;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i + 1] <= a[i])
            flag = true;
    }

    if (flag)
        cout << -1 << endl;
    
    else cout << c << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}