//code to print quotient and remainder

#include<stdio.h>

int main()
{
    int divident;
    printf("Enter divident : ");
    scanf("%d",&divident);
    int divisor;
    printf("\nEnter divisor : ");
    scanf("%d",&divisor);
    int quotient = divident / divisor;
    int remainder = divident % divisor;
    printf("\nQuotient = %d and Remainder = %d",quotient,remainder);


    return 0;

}