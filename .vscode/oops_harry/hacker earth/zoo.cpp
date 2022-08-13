#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='z'){
            x++;

        }
        else if(s[i]=='o'){
            y++;
        }
    }
    
    
    if(y==x*2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    

    return 0;
}