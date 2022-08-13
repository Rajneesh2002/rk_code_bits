// get,set,sum,avg,max,min functions

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

//get()
int get(struct array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}
//set()
void set(struct array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
}
//max()
int max(struct array arr){
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
    }
    return max;
}
//min()
int min(struct array arr){
    int min=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
    return min;
}
//sum()
int sum(struct array arr){
    int s=0;
    for(int i=0;i<arr.length;i++){
        s+=arr.A[i];
    }
    return s;
}
//average()
float avg(struct array arr){
    return (float)sum(arr)/arr.length;
}


int main(){
    struct array arr={{2,3,4,5,9},10,5};
    //cout<<get(arr,9)<<endl;
    //set(&arr,0,15);
    //cout<<max(arr)<<endl;
    //cout<<min(arr)<<endl;
    //cout<<sum(arr);
     cout<<avg(arr)<<endl;
    display(arr);

    return 0;
}