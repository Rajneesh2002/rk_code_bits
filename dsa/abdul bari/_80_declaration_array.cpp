#include<iostream>
using namespace std;
int main(){
    //normal method
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //using single pointer
    int *B[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];
    //using double pointer
    int **C;
    C=new int*[3];
    c[0]=new int[4];
    c[1]=new int[4];
    c[2]=new int[4];
    return 0;

}