#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
        if(a>=x&&b>=y) cout<<"yes"<<endl;
        else if(a+c>=x&&b>=y) cout<<"yes"<<endl;

        else if(a>=x&&b+c>=y) cout<<"yes"<<endl;
        else if(abs(x-a)+abs(y-b)<=c) cout<<"Yes"<<endl;
        
        else cout<<"No"<<endl;
    }
    return 0;
}