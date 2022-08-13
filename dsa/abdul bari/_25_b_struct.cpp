#include <iostream>
using namespace std;

struct rect{
    int length;
    int breadth;
};

int area(struct rect r1){
    return r1.length*r1.breadth;
}
int peri(struct rect r1){
    int c=2*(r1.length+r1.breadth);
    return c;
}

int main(){
    struct rect r1;
    cin>>r1.length>>r1.breadth;
    cout<<"area "<<area(r1)<<endl;
    cout<<"perimeter "<<peri(r1)<<endl;
    return 0;
}