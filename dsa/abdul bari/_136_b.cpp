//second method of reversing strings
#include<iostream>
using namespace std;
int main(){
    char a[]="python";
    char t;
    int i,j;
    for(j=0;a[j]!='\0';j++){

    }
    j--;
    for(i=0;i<j;i++,j--){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("%s",a);
    return 0;
}    