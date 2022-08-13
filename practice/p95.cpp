#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> v(11,0);
        for(int i=0;i<n;i++)
        {
            v[a[i]]++;
        }
        int x=-56;
        for(int i=0;i<12;i++)
        {
            x=max(x,v[i]);
        }

        int c=0;
        for(int i=0;i<12;i++)
        {
            if(v[i]==x) c++;
        }

        if(c==0) cout<<x<<endl;
        else cout<<"COnfused"<<endl;
        

    }
    return 0;
}