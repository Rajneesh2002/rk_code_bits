#include<stdio.h>

int main()
{
    int a;
    printf("Enter value of a: ");
    scanf("%d",&a);
    //multiplication by 4
    int b=a<<2;
    printf("a * 4 = %d \n",b);

    //division by 4;
    int c=a>>2;
    printf("a / 4 = %d",c);
    return 0;
}