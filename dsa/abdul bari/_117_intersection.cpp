//operations on sorted array--intersection
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

// display function
void display(struct array arr)
{
    int i;
    cout << "Elements are" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

//intersection function
struct array* intersection(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array*)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }        
        else if(arr2->A[j]<arr1->A[i]){
           j++;
        }
        else{                  //arr1->A[i]==arr2->A[j]
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

int main(){
    struct array arr1={{2,6,10,15,25},10,5};
    struct array arr2={{3,6,7,15,20},10,5};
    struct array *arr3;
    arr3= intersection(&arr1,&arr2);
    display(*arr3);
    return 0;
}