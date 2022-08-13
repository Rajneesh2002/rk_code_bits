#include<iostream>
using namespace std;

class array{
    private:
        int *A;
        int size;
        int length;
        void swap(int*x,int*y){
              int temp;
              temp=*x;
              *x=*y;
              *y=temp;
        }
    public:
        array(){
            size=10;
            length=0;
            A=new int[size];
        }
        array(int sz){
            size=sz;
            length=0;
            A=new int[size];
        }
        ~array(){
            delete[]A;
        }

void display();
void append(int x);
void insert(int index,int x);
int delete_num(int index);
int linearsearch(int key);
int binsearch(int key);
int RBinSearch(int a[],int l,int h,int key);
int get(int index);
void set(int index,int x);
int max();
int min();
int sum();
float avg();
void reverse1();
void reverse2();
void insertSort(int x);
int isSorted();
void rearrange();
array* merge(array arr2);
array* Union(array arr2);
array* intersection(array arr2);
array* difference(array arr2);

};
//display function
void array::display(){
    int i;
    cout<<endl<<"Elements are"<<endl;
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
//append function
void array::append(int x){
    if(length<size){
        A[length]=x;
        length++;
    }        
}
//insert function
void array::insert(int index,int x){
    
    if(index>=0 && index<=length){
        for(int i=length;i>index;i--){
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
}
//delete function
int array::delete_num(int index){
    int x=0;
    int i;
    if(index>=0 && index<length){
        x=A[index];
        for(i=index;i<length-1;i++){
            A[i]=A[i-1];
        }
        length--;
        return x;
    }
    return 0;
}

//linear search
int array:: linearsearch(int key){
    int i;
    for(i=0;i<length;i++){
        if(key==A[i]){
            swap(&A[i],&A[0]);
            return i;
        }           
    }
    return -1;
}
//normal binary function
int array::binsearch(int key){
    int l,mid,h;
    l=0;
    h=length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==A[mid]){
               return mid;
        }
        else if(key<A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
//recursive function for binary search
int array::RBinSearch(int a[],int l,int h,int key){
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
int array::get(int index){
    if(index>=0 && index<length){
        return A[index];
    }
    return -1;
}
//set()
void array::set(int index,int x){
    if(index>=0 && index<length){
        A[index]=x;
    }
}
//max()
int array::max(){
    int max=A[0];
    for(int i=0;i<length;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}
//min()
int array::min(){
    int min=A[0];
    for(int i=0;i<length;i++){
        if(A[i]<min){
            min=A[i];
        }
    }
    return min;
}
//sum()
int array::sum(){
    int s=0;
    for(int i=0;i<length;i++){
        s+=A[i];
    }
    return s;
}
//average()
float array::avg(){
    return (float)sum()/length;
}
//reversing an array
void array::reverse1()
{
    int *B;
    int i,j;
    B=new int[length];
    for(i=length-1,j=0;i>=0;i--,j++){
        B[j]=A[i];
    }
    for(i=0;i>length;i++){
        A[i]=B[i];
    }
}
//another method of reversing
void array::reverse2(){
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--){
        swap(&A[i],&A[j]);
    }
}
//insertion sort
void array::insertSort(int x){
    int i=length-1;
    if(length==size){
        return ;
    }
    while(i>=0 && A[i]>x){
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x;
    length++;
}
//check whether array is sorted or not
int array::isSorted(){
    int i;
    for(i=0;i<length-1;i++){
        if(A[i]>A[i+1]){
            return 0;
        }
    }
    return 1;
}
//rearrange
void array::rearrange(){
    int i,j;
    i=0;
    j=length-1;
    while(i<j){
        while(A[i]<0)
           i++;
        while(A[i]>=0)
           j--;
        if(i<j){
            swap(&A[i],&A[j]);
        }
    }
}
//merge function
array * array::merge(array arr2){
    int i,j,k;
    i=j=k=0;
    array *arr3=new array(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j]){
            arr3->A[k++]=A[i++];
        }
        else{
            arr3->A[k++]=arr2.A[j++];
        }
    }
    for(;i<length;i++){
        arr3->A[k++]=A[i];
    }
    for(;j<arr2.length;j++){
        arr3->A[k++]=arr2.A[j];
    }
    arr3->length=length+arr2.length;
    
    return arr3;
}
//Union function
array* array::Union(array arr2){
    int i,j,k;
    i=j=k=0;
    array *arr3=new array(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j]){
            arr3->A[k++]=A[i++];
        }
        
        else if(arr2.A[j]<A[i]){
            arr3->A[k++]=arr2.A[j++];
        }
        else{
            arr3->A[k++]=A[i++];
            j++;
        }

    }
    for(;i<length;i++){
        arr3->A[k++]=A[i];
    }
    for(;j<arr2.length;j++){
        arr3->A[k++]=arr2.A[j];
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}
//intersection function
array* array::intersection(array arr2){
    int i,j,k;
    i=j=k=0;
    array *arr3=new array(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j]){
            i++;
        }        
        else if(arr2.A[j]<A[i]){
           j++;
        }
        else{                  //arr1->A[i]==arr2->A[j]
            arr3->A[k++]=A[i++];
            j++;
        }
    }
    arr3->length=k;
    arr3->size=10;
    return arr3;
}
//difference function
array* array::difference( array arr2){
    int i,j,k;
    i=j=k=0;
    struct array *arr3=new array(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j]){
            arr3->A[k++]=A[i++];
        }        
        else if(arr2.A[j]<A[i]){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    for(;i<length;i++){
        arr3->A[k++]=A[i];
    }   
    arr3->length=k;
    arr3->size=10;
    return arr3;
}
int main(){
    array *arr1;
    int ch,sz;
    int x,index;
    cout<<"Enter size of array"<<endl;
    cin>>sz;
    arr1=new array(sz);
   

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
                arr1->insert(index,x);
                break;
            case 2:
                cout<<"enter index:"<<endl;
                x=arr1->delete_num(index);
                cout<<"deleted element is "<<x<<endl;
                break;
            case 3:
                cout<<"enter element to search:"<<endl;
                cin>>x;
                index=arr1->linearsearch(x);
                cout<<"element index:"<<index<<endl;
                break;
            case 4:
                cout<<"the sum is:"<<arr1->sum()<<endl;
                break;
            case 5:
                arr1->display();
        }
    }while(ch<6);

    return 0;
}


