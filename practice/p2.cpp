#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int low=0,up=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65&&s[i]<=90) up++;
        else low++;
    }
    if(low>=up)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;

    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s;

    }
    
    
    return 0;
}
