#include<iostream>
using namespace std;

void display(int n)
{
    string s=to_string(n);
    int a=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='5'||s[i]=='6') a++;
    }
    if(a==s.length()) cout<<s<<" ";

}
int main()
{
    int n,k; cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        if(i%k==0) display(i);
    }
    return 0;
}