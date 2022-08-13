#include<iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a,b,c;
        b=n/2;
        int d=n-b;
        int p;
        for(int i=1;i<=d;i++)
        {
            p=0;
            int x=i;
            int y=d-i;
            if(x>y) 
            {
                
                if(x!=d&&y!=d) 
                {
                    p=1;
                    cout<<x<<" "<<d<<" "<<y<<endl;
                    break;
                }   
            }
        }
        if(!p) 
        {
                b=n/2+1;
             d=n-b;
            for(int i=1;i<=d;i++)
            {
                p=0;
                int x=i;
                int y=d-i;
                if(x>y) 
                {
                    p=1;
                    if(x!=d&&y!=d)
                    {
                     cout<<x<<" "<<d<<" "<<y<<endl;
                    break;
                    }    
                    
                }
            }
        }
    }
    return 0;
}