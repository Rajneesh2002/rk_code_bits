#include<iostream>
using namespace std;
//factorial function
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);

    }
}
//normal function
int nCr(int n, int r){
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}
//uisng recursion
int NCR(int n,int r){
    if(n==r||r==0)
    return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);

}
int main(){
    cout<<nCr(5,3)<<endl;
    cout<<NCR(5,3);

    return 0;
}