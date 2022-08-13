#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++) s+=i;
    return s;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a; cin>>a;
        string s=to_string(a);
        int n=s.length();
        
        cout<<sum(n)+(((a%10) - 1)*10)<<endl;
    }
    return 0;
}