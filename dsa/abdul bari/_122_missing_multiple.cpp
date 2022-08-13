// finding multiple missing element in sorted array
#include<iostream>
using namespace std;
int main(){
    int arr[11]={6,7,8,9,11,12,15,16,17,18,19};  //11
    //          0,1,2,3, 4, 5, 6, 7 ,8 ,9 ,10
    int diff=arr[0];
    for(int i=0;i<11;i++){
        if(diff!=(arr[i]-i)){
            while(diff<arr[i]-i){
                cout<<i+diff<<" ";
                diff++;
            }
        }
    }
    return 0;
}