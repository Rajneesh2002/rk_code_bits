#include<iostream>
using namespace std;
int main()
{
    int a,b; cin>>a>>b;
    if(a==b) cout<<"1";
    else{
        int c=0;
        while(a<=b)
        {
            a*=3;
            b*=2;
            c++;
        }
        cout<<c;
    }
    return 0;
}