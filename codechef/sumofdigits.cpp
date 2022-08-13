#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int k=a[i].length();
        int x=stoi(a[i]);
        int sum=0;
        while(x>0){
            int rem=x%10;
            sum+=rem;
            x=x/10;
        }
        cout<<sum<<endl;
    }    
    return 0;
}