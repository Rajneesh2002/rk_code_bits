#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<(a[i].length());j+=2){
            cout<<a[i][j];
        }
        cout<<" ";
        for(int j=1;j<(a[i].length());j+=2){
            cout<<a[i][j];
        }

        cout<<endl;
    }

    return 0;
}