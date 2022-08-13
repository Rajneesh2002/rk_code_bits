//reversing an array
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
    cout<<"Elements are:"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
//swap function
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
//reversing an array
void reverse1(struct array *arr)
{
    int *B;
    int i,j;
    B=new int[arr->length];
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}
//another method
void reverse2(struct array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}

int main(){
     array arr={{2,3,4,5,9},10,5};
    
    //display(arr);
    //reverse1(&arr);
    reverse2(&arr);
    display(arr);

    return 0;
}