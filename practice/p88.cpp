#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        int a[n]; int b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        sort(a,a+n);
        sort(b,b+n,greater<int>());
        int i=0,j=0;
        while(k--)
        {
            if(b[j]>a[i]) 
            {
                int t=a[i];
                a[i]=b[j];
                b[j]=t;
            }
            i++; j++;
        }
        int s=0;
        for(int i=0;i<n;i++) s+=a[i];
        cout<<s<<endl;


    }
    return 0;
}