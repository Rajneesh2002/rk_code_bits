//code to check whether the given three angles form a triangle or not

#include<stdio.h>

int main()
{
    printf("Enter the three angles of triangle: ");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float sum=a+b+c;
    if(sum==180.0)
    {
        printf("\nIt's a valid triangle.\n");
    }
    else
    {
        printf("\nIt's not a valid triangle.\n");
    }
    return 0;
}