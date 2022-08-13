#include<iostream>
#define ll long long int
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        string s1;
        cin>>s1;

        ll one=0;
        for(ll i=0;i<s1.length();i++)
        {
            if(s1[i]=='1') one++;
        }

        ll sum=one*b;

        string s2="";
        for(ll i=1;i<=b;i++)
        {
            s2+=s1;
        }

        int x=0,pre=0;
        for(ll i=0;i<a*b;i++)
        {
            int p=s2[i]-48;
            pre+=p;
            if(pre==sum-pre) x++;
        }
        cout<<x<<endl;

        

    }
    return 0;
}