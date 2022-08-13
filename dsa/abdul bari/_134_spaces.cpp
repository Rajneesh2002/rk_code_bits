#include<stdio.h>
int main(){
    char a[]="how are   you";
    int s=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' ' && a[i-1]!=' '){
            s++;
        }
    }
    printf("%d",s);
    return 0;
}