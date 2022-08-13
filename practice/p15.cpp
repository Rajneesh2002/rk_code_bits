#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int row=0;
    while(row<n){
        if(row%2==0){
            for(int j=0;j<n;j++) cout<<arr[row][j]<<" ";
        }
        else
        {
            for(int j=n-1;j>=0;j--) cout<<arr[row][j]<<" ";
        }
        row++;
    }
    return 0;
}