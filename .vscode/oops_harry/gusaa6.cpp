//common sub string
#include <iostream>
#include <cstring>
using namespace std;
int main(){

    int test;
    cin>>test;
    int a=test*2;
    string s[a];
    for(int i=0;i<a;i++){
        cin>>s[i];
    }
    for(int i=0;i<a;i+=1){
        int r=0;
        for(int j=0;j<s[i].length();j++){
            for(int k=0;k<s[i+1].length();k++){
                if(s[i][j]==s[i+1][k]){
                   r=1;
                   break;
                }
                
            }
        }
        if(r==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no";

        }
        
    }
    
    return 0;
}