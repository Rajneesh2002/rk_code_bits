#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> v)
{
    int s=0;
    for(int i=0;i<v.size();i++) s+=v[i];
    return s;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; int k;
        cin>>n>>k;
        vector<int> v(n); 
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int> v1;
        int prev_sum=max(0,sum(v));
        v1.push_back(prev_sum);
        int new_sum=prev_sum;
        for(int i=1;i<=n;i++)
        {
           
            v1.push_back(max(v1[i-1],sum(v)+k*i));

        }
        for(int i=0;i<n+1;i++)
        {
            cout<<v1[i]<<" ";
        }

        
    }
    return 0;
}    