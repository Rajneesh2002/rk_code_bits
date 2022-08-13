/*
Q.1
#include<iostream>
using namespace std;
int main(){
   
    q.1..
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        if((s[0]=='Y'||s[0]=='y')&&(s[1]=='E'||s[1]=='e')&&(s[2]=='S'||s[2]=='s'))
            cout<<"Yes"<<endl;
        else    
            cout<<"No"<<endl;
        
    }
    return 0;
}
*/

/*
Q2
#include<iostream>
using namespace std;
int main(){
     int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int a[26]={0};
        for(int i=0;i<n;i++)
        {
            a[s[i]-65]++;
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
           if(a[i]) c+=(a[i]+1);
        }
        cout<<c<<endl;
    }
    return 0;
}
*/

/*
q3
#include<iostream>
using namespace std;
int main(){
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int b[n];
        for(int i=0;i<n;i++)
        {
            int x; string s;
            cin>>x>>s;
            int p=a[i];
            for(int j=0;j<x;j++)
            {
                if(s[j]=='U')
                {
                    p=(p==0)?9:((p-1)%10);
                }
                else
                {
                    p=(p+1)%10;
                }
            }
            b[i]=p;
        }
        for(auto k:b) cout<<k<<" ";
        cout<<endl;
    }
    return 0;
}
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>s;
        string a[x];
        for(int i=0;i<x;i++) cin>>a[i];

        vector<int>v;
        for(int i=0;i<x;i++)
        {
            for(int j=i;j<x;j++)
            {
                v.push_back(a[i]+a[j ])
            }
        }
    }
    return 0;
}