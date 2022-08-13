#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int n; cin>>n;
    while(n--)
    {
        ll t;
        cin>>t;
        vector<long long > vec(t);
        for(ll i=0;i<t;i++) cin>>vec[i];
        int s=0;
        for(ll i=0;i<t;i++) if(vec[i]>=2) s++;
        if(t==3&&(vec[1]%2==1)) cout<<-1<<endl;
        else{
            ll rk=0;
            for(ll i=1;i<t-1;i++)
            {
                if((vec[i]%2==0)&&(vec[i]>=2) ) 
                {
                    rk+=vec[i]/2;

                }  
                if(vec[i]%2==1&&vec[i]>2&&s>=1)
                {
                    rk+=(vec[i]+1)/2;
                }        
            }
            if(rk==0)
            cout<<-1<<endl;
            else cout<<rk<<endl;
        }


    }
    return 0;
}