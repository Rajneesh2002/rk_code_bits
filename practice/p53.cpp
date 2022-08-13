#include<bits/stdc++.h>
using namespace std;
#define pk 8

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
    {
       int a; cin>>a;
       int b[2*a];
       for(int i=0;i<2*a;i++) cin>>b[i];
       int rk=0;
       for(int i=0;i<2*a;i++)
        rk+=b[i];

      if(rk%2==0) cout<<"yes"<<"\n";
      else cout<<"no"<<"\n";  
    }
    
    return 0;
}