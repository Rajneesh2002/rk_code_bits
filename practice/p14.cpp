#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5;
int t,n,m;
string s;
void solve(){
    cin>>s;
    bool kt=false;
    for(int i=s.size()-1;i>0;i--){
        int temp=s[i]-48+s[i-1]-48;
        if(temp>9){
            kt=true;
            s[i]=temp%10+48;
            s[i-1]=temp/10+48;
            break;
        }
    }
    if(kt){
        cout<<s<<'\n';
        return;
    }
    string s2="";
    s2+=s[0]-48+s[1];
    for(int i=2;i<s.size();i++) s2+=s[i];
    cout<<s2<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}