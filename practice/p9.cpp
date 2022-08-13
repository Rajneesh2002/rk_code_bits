#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    string s=to_string(n);
    int a=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='7') a++;
    }
    if((a==4||a==7)&&s.length()==a) cout<<"YES";
    else cout<<"NO";
    return 0;
}