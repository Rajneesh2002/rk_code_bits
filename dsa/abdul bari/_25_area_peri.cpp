#include <iostream>
using namespace std;

int area(int l,int b){
    return l*b;
}
int peri(int l,int b){
    int c=2*(l+b);
    return c;
}
int main(){
    int l,b;
    cin>>l>>b;
    cout<<"area "<<area(l,b)<<endl;
    cout<<"perimeter "<<peri(l,b)<<endl;
    return 0;
}