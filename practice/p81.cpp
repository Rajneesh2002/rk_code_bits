#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);
    printf("Enter value of d: ");
    scanf("%d",&d);

    if(a>b && a>c && a>d)
    {
        printf("%d is largest number",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d is largest number",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("%d is largest number",c);
    }
    else if(d>a && d>b && d>c)
    {
        printf("%d is largest number",d);
    }
    return 0;
}