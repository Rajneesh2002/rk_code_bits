#include<bits/stdc++.h>
#define ll long long
using namespace std;

int issorted(vector<ll>v)
{
    
    for(ll i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1]) return 0;
    }
    return 1;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        if(issorted(a))
        {

         cout<<0<<endl;
         continue;
        
        }
        if(a[n-2]-a[n-1]<=a[n-2]&&a[n-2]<=a[n-1])
        {
            cout<<n-2<<endl;
            for(int i=0;i<n-2;i++)
            {
                cout<<i+1<<" "<<n-1<<" "<<n<<endl;
            }
            continue;
        }
        else cout<<-1<<endl;
          

    }
    return 0;
}