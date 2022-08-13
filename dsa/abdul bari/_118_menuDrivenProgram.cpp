//menu driven program
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct array{
    int *A;
    int size;
    int length;
};
//display function
void display(struct array arr){
    int i;
    cout<<"Elements are"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
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
//swap function
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
//linear search
int linearsearch(struct array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }           
    }
    return -1;
}
//normal binary function
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
//reversing an array
void reverse1(struct array *arr)
{
    int *B;
    int i,j;
    B=new int[arr->length];
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i>arr->length;i++){
        arr->A[i]=B[i];
    }
}
//another method of reversing
void reverse2(struct array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}
//insertion sort
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
//check whether array is sorted or not
int isSorted(struct array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}
//rearrange
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
//merge function
struct array* merge(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array*)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else{
            arr3->A[k++]=arr2->A[j++];
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
}
//Union function
struct array* Union(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array*)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        
        else if(arr2->A[j]<arr1->A[i]){
            arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }

    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }
    for(;j<arr2->length;j++){
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
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
//difference function
struct array* difference(struct array *arr1,struct array *arr2){
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array*)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }        
        else if(arr2->A[j]<arr1->A[i]){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++){
        arr3->A[k++]=arr1->A[i];
    }   
    arr3->length=k;
    arr3->size=10;
    return arr3;
}
int main(){
    struct array arr1;
    int ch;
    int x,index;
    cout<<"Enter size of array"<<endl;
    cin>>arr1.size;
    arr1.A=(int*)malloc(arr1.size*sizeof(int));
    arr1.length=0;

    do
    {
        cout<<endl;
        cout<<"Menu"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Search"<<endl;
        cout<<"4. Sum"<<endl;
        cout<<"5. Display"<<endl;
        cout<<"6. Exit"<<endl;

        cout<<"Enter your choice: "<<endl;
        cin>>ch;
        
        switch(ch){
            case 1: cout<<"Enter an element and index:"<<endl;
                cin>>x>>index;
                insert(&arr1,index,x);
                break;
            case 2:
                cout<<"enter index:"<<endl;
                x=delete_num(&arr1,index);
                cout<<"deleted element is "<<x<<endl;
                break;
            case 3:
                cout<<"enter element to search:"<<endl;
                cin>>x;
                index=linearsearch(&arr1,x);
                cout<<"element index:"<<index<<endl;
                break;
            case 4:
                cout<<"the sum is:"<<sum(arr1)<<endl;
                break;
            case 5:
                display(arr1);
        }
    }while(ch<6);

    return 0;
}


