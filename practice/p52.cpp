#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int i=0,p=0,c=0;
        while(i<s.length())
        {
           
            if(s[i]==1)
            {
                
                
                while(s[i]!=0)
                {
                    i++;
                    p++;
                }
                c=max(c,p);
            }
            else{
                i++;
                p=0;

            } 
        }
        cout<<c;
    }
    
    return 0;
}