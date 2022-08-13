#include<iostream>
using namespace std;
int ret(string s,char a)
{
    int l=s.length();
    int x;
    for(int i=0;i<l;i++)
    {
        if(s[i]==a)
         {
             x=i;
             break;
         }
         
    }
    return x;

}
int main()
{
    int t; cin>>t;
    while(t--)
    {
       string k; cin>>k;
       if((ret(k,'r')<ret(k,'R'))&&(ret(k,'g')<ret(k,'G'))&&(ret(k,'b')<ret(k,'B'))) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    
    
    return 0;
}
