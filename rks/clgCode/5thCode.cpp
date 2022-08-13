//code to whether all the three points lie on a same straight line or not

#include<stdio.h>
int main()
{
    printf("Enter the co-ordinates of the points: \n");
    int x1,x2,y1,y2,x3,y3;
    printf("The value of x1: ");
    scanf("%d",&x1);
    printf("The value of y1: ");
    scanf("%d",&y1);
    printf("The value of x2: ");
    scanf("%d",&x2);
    printf("The value of y2: ");
    scanf("%d",&y2);
    printf("The value of x3: ");
    scanf("%d",&x3);
    printf("The value of y3: ");
    scanf("%d",&y3);
    float m1,m2,m3;
    m1=(x2-x1)/(y2-y1);
    m2=(x3-x2)/(y3-y2);
    if(m1==m2)
    {
        printf("All the three points lie on the same straight line.");
    }
    else
    {
        printf("Points do not lie on the same straight line.");
    }
    return 0;
}