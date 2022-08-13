#include<iostream>
using namespace std;
int main()
{
    string s; cin>>s;
    int arr[26];
    for(int i=0;i<s.length();i++){
        arr[s[i]-97]++;
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(arr[i]>0) c++;
    }
    if(c%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}