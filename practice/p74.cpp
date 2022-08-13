// Question no. 8

#include<stdio.h>

int main()
{
    unsigned int length,breadth;
    printf("Enter length of rectangle: ");
    scanf("%u",&length);
    printf("Enter breadth of rectangle: ");
    scanf("%u",&breadth);

    int perimeter=2*(length+breadth);
    int area=length*breadth;

    printf("The perimeter of the given rectangle is %d",perimeter);
    printf("\nThe area of the given rectangle is %d",area);

    return 0;
}