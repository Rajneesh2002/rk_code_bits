//lab2 q.2
#include<stdio.h>
int main()
{
    
    int a,b; 
    scanf("%d%d",&a,&b);

    int min=(a>b)*b + (b>a)*a;
    int max=(a>b)*a + (b>a)*b;

    printf("min=%d",min);
    printf("\nmax=%d",max);
    return 0;
}