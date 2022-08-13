#include <iostream>
using namespace std;
//class can be replaced with struct---no prblm, but then rect r1={5,7}--->this should be changed,rest is same
class rect{
    int length;
    int breadth;
    public:
    rect(int l,int b){
        length=l;
        breadth=b;
    }

    int area(){
    return length*breadth;
    }
    int peri(){
    int c=2*(length+breadth);
    return c;
    }
};



int main(){
    rect r1(5,7);
    
    cout<<"area "<<r1.area()<<endl;
    cout<<"perimeter "<<r1.peri()<<endl;
    return 0;
}