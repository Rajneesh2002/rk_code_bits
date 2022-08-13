#include<iostream>
#include<cstring>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string s;
    for(int i=0;i<n;i++){
        s+=to_string(arr[i]%10);
    }
    int a=stoi(s);
    
    if(a%10==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


    return 0;
}