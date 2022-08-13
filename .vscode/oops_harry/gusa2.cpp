#include<iostream>
#include<string>
using namespace std;
void cal(int year){
    string a="12.09.";
    string b="13.09.";
    if(year%100==0){
        if(year%400==0){
            cout<<a<<year<<endl;
        }
        else{
            cout<<b<<year<<endl;
        }
    }
    else{
        if(year%4==0){
            cout<<a<<year<<endl;
        }
        else{
            cout<<b<<year<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    cal(n);
    return 0;
}