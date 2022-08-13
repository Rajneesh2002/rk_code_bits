#include <iostream>
using namespace std;

int fact(int n){
    if (n<2){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"the factorial of "<<num<<" is "<<fact(num);
    return 0;
}