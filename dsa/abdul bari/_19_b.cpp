// passing structure as parameter 
//pass by reference
#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int area(struct rectangle &r1){
    // r1.length++  ----> this will  change the value of length as it is passed by reference
    return r1.length*r1.breadth;

}
int main(){
    struct rectangle r={2,5};
    cout<<area(r);
    return 0;
}