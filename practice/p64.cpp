#include<bits/stdc++.h>
#include<set>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> rk(n);
        for(int i=0;i<n;i++) cin>>rk[i];
        set<int> pk;
        for(int i=0;i<n;i++)
        {
            pk.insert(rk[i]);
        }
        int s=pk.size();
        vector<int> v(n);
        for(int j=1;j<=n;j++)
        {
            if(j<s) 
            {
                v[j-1]=s;
            }
            else 
            {
                v[j-1]=j;
            }
        }
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
        

    }
    return 0;
}