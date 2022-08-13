#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
       void setnumber(int v1,int v2){
           a=v1;
           b=v2;
       }
        friend complex sumcomplex(complex c1,complex c2);
        void printnumber(){
           cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
       }

};

complex sumcomplex(complex c1,complex c2){
    complex c3;
    c3.setnumber((c1.a+c2.a),(c1.b+c2.b));
    return c3;
}



 int main(){
     complex c1,c2,sum;
     c1.setnumber(2,4);
     c1.printnumber();

     c2.setnumber(4,6);
     c2.printnumber();

     sum=sumcomplex(c1,c2);
     sum.printnumber();


     
     
     
     return 0;
 }