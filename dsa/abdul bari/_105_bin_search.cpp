
//binary search
//time complexity (for worst & avg. case)--> O(log n)
//time complexity (for best case)---> O(1)
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct array{
    int A[10];
    int size;
    int length;
};
    

//normal function
int binsearch(struct array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid]){
               return mid;
        }
        else if(key<arr.A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

//recursive function for binary search
int RBinSearch(int a[],int l,int h,int key){
    int mid;
    if(l<=h){
        if(key==a[mid]){
        return mid;
        }
    else if(key<a[mid]){
        return RBinSearch(a,l,mid-1,key);

        }
    else{
        return RBinSearch(a,mid+1,h,key);
        }

    }
    
    return -1;
}

int main(){
    struct array arr={{2,3,4,5,6},10,5};
    //cout<<binsearch(arr,5)<<endl;
    printf("%d",RBinSearch(arr.A,0,arr.length,3));
    return 0;
}