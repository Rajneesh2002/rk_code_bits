/*
1.insert element in a sorted array
2.check whether the array is sorted or not
3.bringing +ve no. to right side & -ve to the left
*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct array{
    int A[10];
    int size;
    int length;
};
//display function
void display(struct array arr){
    int i;
    cout<<"Elements are"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
//swap function
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void insertSort(struct array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size){
        return ;
    }
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;

}
int isSorted(struct array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}
void rearrange(struct array*arr){
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0)
           i++;
        while(arr->A[i]>=0)
           j--;
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
    }
}

int main(){
    struct array arr={{2,-3,25,10,-15},10,5};
    //insertSort(&arr,1);
    //cout<<isSorted(arr)<<endl;
    //{{2,3,5,10,15},10,5};
    rearrange(&arr);
    display(arr);

    return 0;
}