#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vsolve()
{
    string s;
    cin>>s;
    int c=0;
    int n=s.length();
    vector<int> p(n+2);
    vector<int> q(n+2);
    p[n+1]=q[0]=0;
    for(int i=1;i<=n;i++)
    {
        q[i]=q[i-1]+(s[i-1]=='0');

    }
    for(int i=n;i>=1;i--)
    {
        p[i]=p[i+1]+(s[i-1]=='1');
    }

    for(int i=1;i<=n;i++)
    {
        if(q[i-1]==0&&p[i+1]==0) c++;
    }
    cout<<c<<endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vsolve();
    }
    return 0;
}