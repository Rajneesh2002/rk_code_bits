#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        vector<int> v(27,0);
        int a=0;
        for(int i=0;i<n;i++)
        {
            if(v[s[i]-64]==-1)
            {
                a=1;
                break;
            }
            else
            {
                v[s[i]-64]++;
                if(s[i]!=s[i+1]) 
                {
                    v[s[i]-64]=-1;
                    continue;
                }

            }
        }
        if(a) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}