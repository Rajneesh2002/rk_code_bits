#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct array{
    int A[10];
    int size;
    int length;
};


//linear search
int linearsearch(struct array arr,int key){
    for(int i=0;i<arr.length;i++){
        if(key==arr.A[i])
           return i;
    }
    return -1;
}

int main(){
    struct array arr={{2,3,4,5,6},10,5};
    cout<<linearsearch(arr,5);
    

    return 0;
}