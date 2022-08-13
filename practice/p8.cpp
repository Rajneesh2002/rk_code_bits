#include<iostream>
using namespace std;
int main()
{
    int a,c=0; cin>>a;
    int arr[a];
    for(int i=0;i<a;i++) cin>>arr[i];
    if(a==1) cout<<"1";
    else if(a==2)
    {
        if(arr[0]==arr[1]) cout<<"1";
        else cout<<"2";
    }
    else{

    
    for(int i=0;i<a-1;i++){
        if(arr[i]==arr[i+1]) c++;
    }
    cout<<c;
    }
    return 0;
}