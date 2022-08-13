#include<bits/stdc++.h>
using namespace std;


int main()
{
    
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int p=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i])
            {
                p++;
            }
            else
            {
                ans=max(ans,p);
                p=0;
                
            }
            
        }
        cout<<max(ans,p);
    
    return 0;
}