#include<iostream>
using namespace std;
int main(){
    int s[4][2]={
        {12,14},{1,4},{41,9},{3,19}
    };

    int (*p)[2];
    int i,j,*pint;
    for(i=0;i<4;i++)
    {
       
        pint=s[i];
        printf("\n");

        for(j=0;j<2;j++)
        {
            printf("%d ",*(pint+j));
        }
    }

    return 0;
}