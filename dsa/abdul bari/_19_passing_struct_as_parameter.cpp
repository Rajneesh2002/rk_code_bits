// passing structure as parameter 
//pass by value
#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int area(struct rectangle r1){
    // r1.length++  ----> this will not change the value of length as it is passed by value
    return r1.length*r1.breadth;

}
int main(){
    struct rectangle r={2,5};
    cout<<area(r);
    return 0;
}