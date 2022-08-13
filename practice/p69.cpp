#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
    int a=s.length();
    int f=0;
    string b=s;
    sort(s.begin(),s.end());
    for(int i=0;i<a-1;)
    {
        if(s[i]==s[i+1]) i+=2;
        else
        {
            f=1;
            break;
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
        string s; cin>>s;
        if(n&1) cout<<"NO"<<endl;
        else
        {
            if(check(s)) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

        }
    }
    return 0;
}