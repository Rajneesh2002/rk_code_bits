// kickstart
#include<bits/stdc++.h>
using namespace  std;
int main()

{
    int t; cin>>t;
    int i=1;
    while(i<=t)
    {
        int a,b; cin>>a>>b;
        string s; cin>>s;
        string s1=s;
        reverse(s.begin(),s.end());
        int c=0;
        for(int i=0;i<a;i++)
        {
            if(s[i]!=s1[i]) c++;
        }
        int d=c/2;
        cout<<"Case #"<<i<<":"<<" "<<b-d<<endl;
        i++;
    }


    return 0;
}    
   

