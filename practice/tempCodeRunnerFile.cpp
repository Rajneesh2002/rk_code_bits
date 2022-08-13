#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a,b,c;
        int d=n-1;
        if(d&1) cout<<d/2<<" "<<d/2+1<<" "<<1<<endl;
        else
        {
            cout<<d/2-1<<" "<<d/2+1<<" "<<1<<endl;
        }
    }
    return 0;
}