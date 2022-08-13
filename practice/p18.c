#include<stdio.h>
#include<stdlib.h>

double get_mean(int *ptr,int n)
{
    int s=0;
    for(int i=0;i<n;i++){
        s+=*(ptr+i);
    }
    return s/n;
}

int *add_array(int *ptr,int n,int x)
{
    int *new_arr=(int *)malloc(sizeof(int)*(n+1));
    int i;
    for( i=0;i<n;i++){
        new_arr[i]=*(ptr+i);
    }
    new_arr[n]=x;
    return new_arr;
}
int main(){
    int *ptr = (int *)malloc(4);
    int d;
    scanf("%d", &d);
    ptr[0]=d;
    int n=1;
    while(scanf("%d",&d)) {
        if (d==-1) {
            break;
        }
         ptr = add_array(ptr,n,d);
         n++;
     }
     printf("%.2lf", get_mean(ptr,n));
     return 0;
}
