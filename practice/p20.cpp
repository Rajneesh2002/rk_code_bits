#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c; 
        cin>>a>>b>>c;
        if(b>a&&c>a) cout<<"nothing"<<endl;
        else if(a>=b) cout<<"pizza"<<endl;
        else if(a>=c) cout<<"burger"<<endl;
    }
    return 0;
}