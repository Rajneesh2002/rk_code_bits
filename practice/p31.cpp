#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin>>n;
    while(n--){
        int a,b; cin>>a>>b;
        string s; cin>>s;
        if(b<2) cout<<1<<endl;
        else{
        string s1=s;
        reverse(s.begin(),s.end());
        if(s1==s) cout<<1<<endl;
        else cout<<2<<endl;
        }
    }


    
    return 0;
}
