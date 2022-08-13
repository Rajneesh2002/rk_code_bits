#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    //bitwise operators
    printf("value of a | b = %d\n",a|b);
    printf("value of a & b = %d\n",a&b);
    printf("value of a ^ b = %d\n",a^b);
    printf("value of a << 1 = %d\n",a<<1);
    printf("value of b >> 1 = %d\n",b>>1);

    //logical opeartors
    printf("value of a || b is %d\n",a||b);
    printf("value of a && b is %d\n",a&&b);
    prinf("value of !a is %d",!a);
    return 0;
}