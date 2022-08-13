//comparing 2 strings
#include<iostream>
using namespace std;
int main(){
    char a[]="painter";
    char b[]="painting";
    int i,j;
    for(i=0,j=0;a[i]!='\0'&& b[j]!='\0';i++,j++){
        if(a[i]!=b[j]){
            break;
        }
    }
    if(a[i]==b[j]){
        printf("both are equal");
    }
    else if(a[i]<b[j]){
        printf("a is less than b");
    }
    else{
        printf("a is greater than b");

    }

    return 0;
}