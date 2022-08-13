#include <bits/stdc++.h>
using namespace std;

int count(string s)
{
    int a=s.length();
    int c=0;
    for(int i=0;i<a-1;i++)
    {
        
            if(s[i]=='1'&&s[i+1]=='0') c++;
        
    }
    if(s[a-1]=='1') c++;
    return c;
}

int main()
{
    string s; cin>>s;
    cout<<count(s);
    return 0;
}