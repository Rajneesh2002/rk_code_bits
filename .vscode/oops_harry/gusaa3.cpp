#include<iostream>
#include<string>
using namespace std;


void cm(string s){
    int count=1;
    for(int i=0;i<s.length();i++){
        if(s[i]>64 && s[i]<91){
            count++;
        }
    }

    cout<<count;
}
int main(){
    string b;
    cin>>b;
    cm(b);
    return 0;
}