#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int c=0;
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i]) x++;

        }
        if(x==n) cout<<n<<endl;
        else
        {
        sort(b,b+n,greater<int>());
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i]) c++;
        }
        cout<<c-x<<endl;
        }
        
    }
    return 0;
}