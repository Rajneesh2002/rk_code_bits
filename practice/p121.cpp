#include<bits/stdc++.h>
using namespace std;

float median(int arr[],int n,int p,int q)
{
    sort(arr+p,arr+q+1);
    if(n%2!=0)  return (float)arr[n/2];
    return ((float))(a[(n-1/2)]+a[n/2])/2.0;
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,m; cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int mx=-890,x;
        if(m==1)
        {
            x=median(arr,n,0,n-1);
        }
        else
        {

            for(int i=0;i<n;i++)
            {
                
            }


        }
        cout<<x<<endl;
    }
    
    return 0;
}