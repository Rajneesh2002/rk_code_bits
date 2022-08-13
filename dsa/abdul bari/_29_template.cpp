#include<iostream>
using namespace std;

class arithmetic{
    int a;
    int b;
    public:
       arithmetic(int a,int b);
       int add();
       int sub();
};

arithmetic::arithmetic(int a,int b){
    this->a=a;
    this->b=b;
}

int arithmetic::add(){
    int c;
    c=a+b;
    return c;
}

int arithmetic::sub(){
    int c;
    c=a-b;
    return c;
}


int main(){
    arithmetic rk(5,9);
    cout<<rk.add()<<endl;
    cout<<rk.sub()<<endl;
    return 0;
}