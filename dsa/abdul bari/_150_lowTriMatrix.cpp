//row major formula
// creating & printing lower traingular matrix using struct
#include<iostream>
using namespace std;

class matrix{
    int n;
    int *a;
    public:
        matrix(){
            n=2;
            a=new int[2];
        }
        matrix(int n){
            this->n=n;
            a=new int[n];
        }
        void setMatrix(int i,int j,int x);
        int getMatrix(int i,int j);
        void display();        
        ~matrix(){
            delete []a;
        }
};
void matrix::setMatrix(int i,int j,int x){
    if(i==j){
         a[i-1]=x;
    }
            
}
int matrix::getMatrix(int i,int j){
    if(i==j){
        return a[i-1];
    }
    else{
        return 0;
    }
}
void matrix::display(){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
               cout<<a[i]<<" ";
               }
            else{
                cout<<"0 ";
               }
        }
            cout<<endl;
    }
            
}        

int main(){
    matrix m(4);
    m.setMatrix(1,1,3);
    m.setMatrix(2,2,5);
    m.setMatrix(3,3,8);
    m.setMatrix(4,4,9);
    m.display();

    return 0;
}