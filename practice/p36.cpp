#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b; cin>>a>>b;
        if(a>=b) cout<<b<<endl;
        
        else
        {
            while(b>a){
                b=b-a-1;
                
            }
            cout<<b<<endl;
            
        }
    
    
    }
    return 0;
}