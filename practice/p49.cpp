#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v)
{
    int s=v.size();
    vector<int> v2=v;
    sort(v2.begin(),v2.end());
    
    int i=0,f=0;
    
    while(i<s)
    {
        vector<int> r1;
        vector<int> r2;
        vector<int> r3;
        for(int k=0;k<=i;k++) r1.push_back(v[k]);
        sort(r1.begin(),r1.end());
        for(int p=i+1;p<s;p++) r2.push_back(v[p]);
        sort(r2.begin(),r2.end());
        for(int y=0;y<r1.size();y++) r3.push_back(r1[y]);
        for(int y=0;y<r2.size();y++) r3.push_back(r2[y]);
        if(r3!=v2)
        {
            f=1; break;
        }
        i++;
        
    }
    if(f==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}    

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a; cin>>a;
        vector<int> arr;
        int x;

        for(int i=0;i<a;i++){
            cin>>x;
            arr.push_back(x);
        }
       solve(arr);
    }
    return 0;
}