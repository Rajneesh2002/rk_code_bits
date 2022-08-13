#include <iostream>
using namespace std;

class rectangle{
    int length;
    int breadth;
    public:
       /*
       void initialise(int l,int b){
           length=l;
           breadth=b;
       }
       */
       rectangle(int l,int b){
           length=l;
           breadth=b;
       }
       int area(){
           return length*breadth;
       }
       void changelength(int l){
           length=l;
       }
};

int main(){

    rectangle r(5,3);
    
    cout<<r.area()<<endl;
    r.changelength(7);
    cout<<r.area()<<endl;
    return 0;

}