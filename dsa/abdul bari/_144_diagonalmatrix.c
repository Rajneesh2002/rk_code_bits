// diagonal matrix in C using struct by stroring diagonal elements in an 1D array
// instead of storing it in 2D array
#include<stdio.h>

struct matrix{
    int a[10];
    int n;
};

void setMatrix(struct matrix *m,int i,int j,int x){
    if(i==j){
        m->a[i-1]=x;
    }
}

int getMatrix(struct matrix m,int i,int j){
    if(i==j){
        return m.a[i-1];
    }
    else{
        return 0;
    }
}

void display(struct matrix m){
    int i,j;
    for(i=0;i<m.n;i++){
        for(j=0;j<m.n;j++){
            if(i==j){
                printf("%d ",m.a[i]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main(){
    struct matrix rk;
    rk.n=4;
    setMatrix(&rk,1,1,3);
    setMatrix(&rk,2,2,5);
    setMatrix(&rk,3,3,4);
    setMatrix(&rk,4,4,6);
    display(rk);
    return 0;
}