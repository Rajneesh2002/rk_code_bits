#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){        
        cin>>b[i];       
    } 
    for(int i=0;i<n;i++){
        if(b[i]<3){
            cout<<b[i]<<endl;
        }
        else if(b[i]>2){
            cout<<(b[i]/2)+1<<endl;
        }
    }
    return 0;
}