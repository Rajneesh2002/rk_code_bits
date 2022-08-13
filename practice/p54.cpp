#include<bits/stdc++.h>
using namespace std;

int check(vector<int> v,int n)
{
    int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                f=1; break;
            }
        }
        
        return f;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v;
        int x;
        for(int k=0;k<n;k++){
            cin>>x;
            v.push_back(x);
        }
        int y=0;
        for(int j=0;j<n;j++)
        {

        
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1]&&((v[i]+v[i+1])%2!=0))
            {
                swap(v[i],v[i+1]);
            }
            
        }
        if(check(v,n)==0)
        {
            cout<<"Yes"<<endl;
            y=1;
            break;
        }
        else continue;
        }
        if(y==0) cout<<"No"<<endl;
        
        
        
    } 
    
    return 0;
}