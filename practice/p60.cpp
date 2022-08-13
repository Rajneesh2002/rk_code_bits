#include<bits/stdc++.h>
using namespace std;

void left(vector<int> &v)
{
    int l=v.size();
    int x=v[0];
    for(int i=0;i<l-1;i++)
    {
        v[i]=v[i+1];
    }
    v[l-1]=x;
    for(int i=0;i<l;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        if(n==3)
        {
            v.push_back(1);
            v.push_back(3);
            v.push_back(2);
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }cout<<endl;
            int k=n-1;
            while(k--)
            {
                left(v);
            }

            
        }
    }
    
    
    return 0;
}