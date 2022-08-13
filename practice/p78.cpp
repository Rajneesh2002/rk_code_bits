//Question no. 7

#include<stdio.h>

int main()
{
    unsigned int basic_salary;
    printf("Enter your basic salary: ");
    scanf("%u",&basic_salary);

    unsigned int TA = basic_salary / 10; 
    unsigned int HRA = basic_salary / 5; 

    unsigned int total_salary=basic_salary + TA + HRA;
    printf("Total salary is : %u",total_salary);

    return 0;
}