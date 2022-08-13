#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
         int n,b;
         cin>>n>>b;
         int f=0;
         int max_area=-1;
         while(n--)
         {
            int x,y,z; cin>>x>>y>>z;
            if(z>b) continue;
            else{
               f=1;
               max_area=max(max_area,x*y);
            }
         }
         if(f==0) cout<<"no tablet"<<endl;
         else cout<<max_area<<endl;
    }
    return 0;
}