// finding multiple missing element in sorted array using hash table/bitset
#include<iostream>
using namespace std;
int main(){
    int arr[11]={6,7,8,9,11,12,15,16,17,18,19};  //11
    //          0,1,2,3, 4, 5, 6, 7 ,8 ,9 ,10
    int l=arr[0];
    int h=arr[0];
    for(int i=0;i<11;i++){
        l=min(l,arr[i]);
        h=max(h,arr[i]);
    }
    int a[h+1]={0};
    for(int i=0;i<11;i++){
        a[arr[i]]++;
    }
    for(int i=l;i<h+1;i++){
        if(a[i]==0){
            cout<<i<<" ";
        }
    }    
    return 0;
}    