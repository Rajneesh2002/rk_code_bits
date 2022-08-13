#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        int b[1001]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        int mx=INT_MIN;
        for(int i=0;i<1001;i++)
        {
            mx=max(mx,b[i]);
        }
        int c=0;
        for(int i=0;i<1001;i++)
        {
            if(b[i]==mx) c++;
        }


        if(c) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

        
        
    }
    return 0;
}