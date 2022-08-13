#include<stdio.h>

int main()
{ 
    //array containing maths marks
    int maths[10];
    //array containing marks of science
    int science[10];
    printf("Enter marks of maths : \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&maths[i]);
    }
    printf("\nEnter marks of science : \n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&science[i]);
    }
    //sorting maths marks
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(maths[j]<maths[i])
            {
                int t=maths[j];
                maths[j]=maths[i];
                maths[i]=t;
            }
        }
    }
    //printing sorted array containing maths marks
    printf("\nMaths marks in sorted order: \n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",maths[i]);
    }

    return 0;
}