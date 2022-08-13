
// append,insert and delete 
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

//append function
void append(struct array*arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length]=x;
        arr->length++;
    }
         
}

//insert function
void insert(struct array*arr,int index,int x){
    
    if(index>=0 && index<=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

//delete function
int delete_num( array*arr,int index){
    int x=0;
    int i;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i-1];
        }
        arr->length--;
        return x;
    }
    return 0;
}


int main(){
    struct array arr={{2,3,4,5,6},10,5};
    //append(&arr,20);
    //insert(&arr,3,10);
    cout<<delete_num(&arr,4)<<endl;
    display(arr);

    return 0;
}