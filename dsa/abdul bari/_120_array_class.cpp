#include<iostream>
using namespace std;

template<class T>
class array{
    private:
      T *A;
      int size;
      int length;
    public:
      array(){
          size=10;
          A=new T[10];
          length=0;
      }
      array(int sz){
          size=sz;
          length=0;
          A=new T[size];
      }  
      ~array(){
          delete[]A;
      }
      void display();
      void insert(int index,T x);
      T Delete(int index);


};
template<class T>
void array<T>::display(){
    cout<<endl<<"Elements are:"<<endl;
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
template<class T>
void array<T>::insert(int index,T x){
    if(index>=0 && index<=length){
        for(int i=length-1;i>=index;i--){
            A[i+1]=A[i];
        }
        A[index]=x;
        length++;
    }
}
template<class T>
T array<T>::Delete(int index){
    int x=0;
    if(index>=0 && index<length){
        x=A[index];
        for(int i=index;i<length-1;i++){
            A[i]=A[i+1];
        }
        length--;
    }
    return x;
}

int main(){
    array<char> arr(10);
    arr.insert(0,'a');
    arr.insert(1,'b');
    arr.insert(2,'c');
    arr.display();
    cout<<arr.Delete(1)<<endl;
    arr.display();
    return 0;
}