#include<iostream>
using namespace std;
int ans(int *arr,int j,int *arr1)
{
    int q=arr1[j-1]+1;
    int s=0;
    for(int k=0;k<=j;k++)
    {
        if(arr[k]>=q) s++;
    }
    return s;
}
int main()
{
    int t; cin>>t;
    int p=1;
    while(p<=t)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int b[n];
        b[0]=1;
        for(int i=1;i<n;i++)
        {
            b[i]=ans(a,i,b);
        }
        cout<<"Case #"<<p<<": ";
        for(int i=0;i<n;i++)
        
        cout<<b[i]<<" ";
        cout<<"\n";


        p++;
    }
    return 0;
}