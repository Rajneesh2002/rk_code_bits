//Question no. 5 (part B)
// C program to swap two integers without using third integer

#include<stdio.h>


//function to swap two integers
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    swap(a,b);
    
    printf("The new value of a is %d",a);
    printf("\nThe new value of b is %d",b);

    return 0;
}