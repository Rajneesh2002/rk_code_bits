//hacker earth---------------cost of balloons
#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int p,q,r,x=0,y=0; 
        cin>>p>>q>>r;
        while(r--)
        {
            int a,b; cin>>a>>b;
            if(a==1) x++;
            if(b==1) y++;
        }
        cout<<min(x,y)*max(p,q)+max(x,y)*min(p,q)<<endl;

    }
    return 0;
}