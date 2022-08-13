#include<bits/stdc++.h>
using namespace std;


int main()
{
    
        int x; cin>>x;
        int n=2*x;
        int a[n]; 
        for(int i=0;i<n;i++) cin>>a[i];
        int m=0,c=0;
        for(int i=0;i<n-1;i+=2)
        {
            if(a[i]<a[i+1]) c++;
            else if(a[i]>a[i+1]) m++;
            else{
             m++; c++;
            }
                
        }
        if(m>c) cout<<"Mishka"<<endl;
        else if(m<c) cout<<"Chris"<<endl;
        else cout<<"Friendship is magic!^^"<<endl;
        
    
    return 0;
}