#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};


//call by address
void initialise(struct rectangle*r,int l,int b){
    r->length=l;
    r->breadth=b;
}

//call by value
int area(struct rectangle r){
    return r.length*r.breadth;
}

//call by address
void changelength(struct rectangle*r,int l){
    r->length=l;
}

int main(){
    struct rectangle r1;
    initialise(&r1,5,3);
    
    cout<<area(r1)<<endl;
    changelength(&r1,6);
    cout<<r1.length<<" "<<r1.breadth;

    return 0;
}