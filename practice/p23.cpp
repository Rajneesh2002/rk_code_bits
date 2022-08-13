
#include<iostream>
using namespace std;
int main()
{
    long long int n; cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    long long int rev=0;
    for(int i=0;i<n/2;i++)
    {
        
        while(a[i]>=10)
        {
            a[i]/=10;
        }
        rev=rev*10+a[i];
    }
    for(int i=n/2;i<n;i++)
    {
        rev=rev*10+(a[i]%10);
    }

    if(rev%11==0) cout<<"OUI";
    else cout<<"NON";

    
    return 0;
}