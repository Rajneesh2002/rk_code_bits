#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);
/*
    if(a>b&&a>c)
    {
        printf("%d is largest number",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d is largest number",b);
    }
    else (c>a&&c>b)
    {
        printf("%d is largest number",c);
    }
    */
    int d=(a>b)?((a>c)?a:c):((b>c?b:c));
    printf("%d is greatest among three numbers",(a>b)?((a>c)?a:c):((b>c?b:c)));
    return 0;
}