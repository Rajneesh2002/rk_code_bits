#include<iostream>
using namespace std;

template<class t>
void swapp(t &a,t &b){
    t temp=a;
    a=b;
    b=temp;
}

template<class t1,class t2>                       
float avrg(t1 a, t2 b){
    float c=(a+b)/2.0;
    return c;
}
int main(){
    float p;
    p=avrg(8.78,1);
    printf("The average of these numberes is: %.3f",p);
    printf("\n");
    int x=5,y=7;
    swapp(x,y);
    cout<<"the value of x is:"<<x<<endl<<"the value of y is:"<<y<<endl;

    return 0;
}