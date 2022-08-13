// passing structure as parameter 
//pass by address
#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void changelength(rectangle *p,int l){
    p->length=l;
}


int main(){
     rectangle r={2,5};
    changelength(&r,20);
    cout<<r.length;
    return 0;
}
