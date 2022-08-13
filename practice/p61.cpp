#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(i+1);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
        int k=n-1;
        int i=0;
        while(k--)
        {
            swap(v[n-1-i],v[n-2-i]);
            for(int j=0;j<n;j++) cout<<v[j]<<" ";
            cout<<endl;

            i++;
            
        }
        
    }
    
    
    return 0;
}