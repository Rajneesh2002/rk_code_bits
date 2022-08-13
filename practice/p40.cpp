#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        //if(n==1) cout<<a[0]<<endl;
        //else if(n==2) cout<<max(a[0],a[1])<<endl;
       // else{

        
        int s=0;
        for(int i=0;i<n-2;i++)
        {
            s=max(s,a[i]+a[i+2]);
        }
        cout<<s<<endl;
        
    }


    return 0;
}