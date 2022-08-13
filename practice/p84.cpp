#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        cout<<((b%a==0)?(b/a-1):(b/a))<<endl;
    }
    return 0;
}