
#include<bits/stdc++.h>
using namespace std;
int count(string s,char a)
{
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==a) c++;

    }
    return c;
}
int main()
{
    int t; cin>>t;
    
    while(t--)
    {
        string s; cin>>s;
        int x=count(s,'0');
        int y=count(s,'1');
        int l=s.length();
        if(x==y)
        {
            if(s.length()==2) cout<<0<<endl;
            else if(s.length()>2){
                string s1=s.substr(0,l-1);
                string s2=s.substr(1,l-1);
                int a=min(count(s1,'0'),count(s1,'1'));
                int b=min(count(s2,'0'),count(s2,'1'));
                cout<<min(a,b)<<endl;

            }
        }
        else{
            cout<<min(x,y)<<endl;
        }


    }
    


    
    return 0;
}