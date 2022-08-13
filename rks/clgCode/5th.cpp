#include<iostream>
using namespace std;

int check(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a; cin>>a;
        int f;
        if(check(a)%2==0) f=1;
        else f=2;
        if(f==1)
        {
            if(check(a+1)%2==0) cout<<a+2<<endl;
            else cout<<a+1<<endl;
        }
        else 
        {
            if(check(a+1)%2==0) cout<<a+1<<endl;
            else cout<<a+2<<endl;
        }
    }
    return 0;
}