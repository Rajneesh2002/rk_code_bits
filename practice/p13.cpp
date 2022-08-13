#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){

    
    int n; cin>>n;
    int sum;
    string s=to_string(n);
    if(s.length()==1) cout<<s<<endl;
    else if(s.length()==2) cout<<s[0]+s[1]-48-48<<endl;
    else{

    
    int i;
    for( i=0;i<s.length()-1;i++)
    {
        sum=0;
        sum+=(s[i]-48-48+s[i+1]);
        if(sum>=10){
            cout<<sum;            
           s.erase(i+1,1);
            i++;
            break;
        }
        cout<<s[i];
    }
    for(;i<s.length();i++) cout<<s[i];
    cout<<endl;
    }
    }

    return 0;
}