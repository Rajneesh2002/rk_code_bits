#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]==2){
                printf("%c%c",i+97,i+97);
                arr[i]=0;
            }
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0) printf("%c",i+97);
        }
        cout<<endl;
    }
    return 0;
}