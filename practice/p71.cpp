//question no.5 (part A)
// C program to swap two integers using third integer

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    //swapping using third integer
    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("The new value of a is %d",a);
    printf("\nThe new value of b is %d",b);

    return 0;
}