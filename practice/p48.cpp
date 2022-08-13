#define pb push_back 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.pb(x);
        }
        int op=0;        
            vector<int>::iterator it=v.begin();
            
            int i=0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==i+1)
                {
                    op++;
                    for(int k=0;k<=i;k++)
                    {
                        it++;
                        
                    }
                    v.insert(it,n+10);
                    it=v.begin();
                }
            }
            //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
            cout<<op;
            
        }    
    return 0;
}