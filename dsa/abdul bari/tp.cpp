#include<stdio.h>
#include<iostream>
using namespace std;

int fact(int n){
    if (n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",fact(arr[i]));
    }
    return 0;
}