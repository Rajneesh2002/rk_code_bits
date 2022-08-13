#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin>>test;
    while(test--)
    {    
    int n,p=1,s=0; cin>>n;    
    vector<int> v2(n),v1(n),r(n,-1);
    for(int i=0;i<n;i++) v1[i]=i+1;    
    for(int i=0;i<n;i++) cin>>v2[i];        
    for(int i=0;i<n;i++)
        if(v2[i]==i+1) r[i]=0;
    while(p<n)
    {
        vector<int> v3(n);
        for(int i=0;i<n;i++) v3[i]=v2[find(v1.begin(),v1.end(),v2[i])-v1.begin()];
        for(int i=0;i<n;i++) if(v3[i]==i+1&&r[i]==-1) r[i]=p;       
        v1=v2; v2=v3; p++;                 
    }
    for(int i=0;i<n;i++) s+=r[i];
    cout<<s<<endl;
    for(int i=0;i<n;i++) cout<<r[i]<<" ";
    cout<<endl;
    }    
    return 0;
}