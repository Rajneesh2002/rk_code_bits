// finding single missing element in sorted array
#include<iostream>
using namespace std;
int main(){
    int arr[8]={5,6,7,8,10,11,12,13};//8
    //          0,1,2,3,4,5,6,7,
    int diff=arr[0];
    for(int i=0;i<8;i++){
        if(diff!=(arr[i]-i)){
            cout<<"missing element found:"<<endl<<i+diff;
            break;
        }
    }
    return 0;
}