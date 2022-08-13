//pattern printing
#include<stdio.h>
int main()
{
    int start=0;
    int end=8;
    int mid=4;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(j==start||j==mid||j==end)
            {
                printf("$");
            }
            else printf("0");
        }
        start++; end--;
        printf("\n");

    }
    return 0;
}