#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,d; cin>>a>>b>>c>>d;
        if(a-c>b-d) cout<<"Second"<<endl;
        else if(a-c<b-d) cout<<"First"<<endl;
        else cout<<"any"<<endl;

    }
    return 0;
}