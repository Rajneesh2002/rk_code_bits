// Question  no. 10

#include<stdio.h>

int main()
{
    unsigned int distance_in_km;

    printf("Enter distance in kilometer: ");
    scanf("%u",&distance_in_km);

    unsigned int distance_in_metres=distance_in_km*1000;
    printf("Distance in meteres is %u metres",distance_in_metres);
    return 0;
}