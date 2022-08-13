//lab2 q.4
#include<stdio.h>
#include<math.h>
int main()
{
    
    float x; 
    printf("Enter value of x: ");
    scanf("%f",&x);

    if(x==0) printf("Value of x must be non-zero : try again");
    else printf("Value of sin(1/x) is : %.4f",sinf(1/x));


    
    return 0;
}