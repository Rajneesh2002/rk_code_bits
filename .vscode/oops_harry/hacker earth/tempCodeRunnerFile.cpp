#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            if(b%2==0) cout<<b/2<<endl;
            else cout<<(b+1)/2<<endl;
        }
        else if(a>1){
            if(b%2==0) cout<<(a*b)/4<<endl;
            else cout<<((b+1)*(a+1))/4<<endl;
            
        }
    }
    return 0;
}
