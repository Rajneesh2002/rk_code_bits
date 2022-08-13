#include<iostream>
using namespace std;

#define ll long long int 

int is(ll arr[],ll n)
{
    for(ll i=0;i<n-1;i++)
    {
        if(arr[i+1]>=arr[i]) return 0;
    }
    return 1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        int x=0;
        
            for(ll i=n-2;i>-1;i--)
            {
                while(a[i+1]<=a[i]&&a[i])
                {
                    a[i]/=2;
                    x++;
                }
            }

            if(is(a,n)) cout<<x<<endl;
            else cout<<-1<<endl;
            for(ll i=0;i<n;i++) cout<<a[i]<<" ";

            cout<<x<<endl;
        




    }
    return 0;
}