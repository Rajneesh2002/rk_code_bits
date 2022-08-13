#include<stdio.h>

int main()
{
    int a; 
    float b;
    char c;
    double d;
    long double e;
    unsigned int f;
    printf("\nSize of int is %d",sizeof(a));
    printf("\nSize of float is %d",sizeof(b));
    printf("\nSize of character is %d",sizeof(c));
    printf("\nSize of double is %d",sizeof(d));
    printf("\nSize of long double is %d",sizeof(e));
    printf("\nSize of unsigned int is %d",sizeof(f));
    return 0;
}