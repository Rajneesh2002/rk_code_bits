//Question no.6

#include<stdio.h>

int main()
{
    float marks1,marks2,marks3;

    printf("Enter the marks in physics out of 100: ");
    scanf("%f",&marks1);
    printf("Enter the marks in chemistry out of 100: ");
    scanf("%f",&marks2);
    printf("Enter the marks in mathematics out of 100: ");
    scanf("%f",&marks3);

    float total_marks=marks1+marks2+marks3;
    printf("Total marks of three subjects is %f",total_marks);

    float percentage=(total_marks/300)*100;
    printf("\nPercentage obtained is %f",percentage);
    

    return 0;
}