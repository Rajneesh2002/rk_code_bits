//C program to convert C to F or F to C 
#include<stdio.h>
int main()
{
    int choice;
    printf(" \n 1. convert C to F \n 2. convert F to C \n Enter your choice: ");
    scanf("%d",&choice);
    if(choice==1) 
    {
        float celcius;
        printf(" Enter temp. in Celcius : ");
        scanf("%f",&celcius);
        float fahrenheit=32+((9*celcius)/5);
        printf(" Temperature in fahrenheit is: %.3f F",fahrenheit);
    }
    else if(choice==2)
    {
        float fahrenheit;
        printf(" Enter temp. in fahrenheit : ");
        scanf("%f",&fahrenheit);
        float celcius=(5*(fahrenheit-32)/9);
        printf(" Temperature in celcius is: %.3f C",celcius);

    }

    return 0;
}