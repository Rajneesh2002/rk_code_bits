#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        int x=1;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int> p;
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                p[x++]=a[i]+a[j];
            }
        }
        
/*
        int i=0,j=i;
        for(;i<n;)
        {
            j++;
            
            if(j==n)
            {
                i++;
                j=i+1;
               

            }
            p[x++]=a[i]+a[j];

        }
*/
        map<int,int> :: iterator it=p.begin();

        for(;it!=p.end();it++)
        {
            cout<<it->second<<" ";
        }
    }
    return 0;
}
// 3 4 5 6 5 6 7 7 8 9