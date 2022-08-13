//1.recursive function to reverse a string
#include<iostream>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }
    string ros=s.substr(1);   
    reverse(ros);
    cout<<s[0];
}
int main(){
    string b="abcdef";
    reverse(b);
    return 0;
}