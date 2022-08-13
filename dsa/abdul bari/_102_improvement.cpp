/*  method of improving linear search--
1.Transposition--moving the element to its previous index
2.Move to Head
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

// improving linear search---method 1--Transposition
int linearsearch1(struct array * arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);

            return i;
        }           
    }
    return -1;
}

// improving linear search---method 2--Move to head
int linearsearch2(struct array * arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);

            return i;
        }           
    }
    return -1;
}

int main(){
    struct array arr={{2,3,4,5,6},10,5};
    
    //cout<<linearsearch1(&arr,5)<<endl;
    //cout<<"displaying elements"<<endl;
    
    cout<<linearsearch2(&arr,5)<<endl;
    cout<<"displaying elements"<<endl;

    display(arr);
    return 0;
}