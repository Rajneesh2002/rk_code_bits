#include<iostream>
using namespace std;

template<class T>
class arithmetic{
    T a;
    T b;
    public:
       arithmetic(T a,T b);
       T add();
       T sub();
};

template<class T>
arithmetic<T>::arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}
template<class T>
T arithmetic<T>::add(){
    T c;
    c=a+b;
    return c;
}
template<class T>
T arithmetic<T>::sub(){
    T c;
    c=a-b;
    return c;
}


int main(){
    arithmetic<int> rk(5,3);
    cout<<rk.add()<<endl;
    cout<<rk.sub()<<endl;
    
    arithmetic<float> pk(5.9,1.6);
    cout<<pk.add()<<endl;
    cout<<pk.sub()<<endl;
    
    return 0;
}