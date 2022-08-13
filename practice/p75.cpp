// Question  no. 9

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);

    //addition
    int sum=x+y;
    printf("The value of x + y is %d",sum);

    //substraction
    int difference=x-y;
    printf("\nThe value of x - y is %d",difference);

    //multiplication
    int multiply=x*y;
    printf("\nThe value of x * y is %d",multiply);

    //division
    int quotient=x/y;
    printf("\nThe value of x / y is %d",quotient);

    //modulus
    int modulus=x%y;
    printf("\nThe value of x % y is %d",modulus);
    
    
    return 0;
}