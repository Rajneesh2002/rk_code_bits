//Question no. 11

#include<stdio.h>

int main()
{
    int seconds;
    printf("Enter time in seconds: ");
    scanf("%d",&seconds);

    int minutes=seconds/60;
    int second=seconds%60;

    printf("The given time is %d minutes %d second",minutes,second);
    return 0;
}