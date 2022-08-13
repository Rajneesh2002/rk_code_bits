#include<iostream>
using namespace std;
int main()
{
    int rows, columns;
    
    printf("enter the number of rows in an array\n");
    scanf("%d", &rows);
    printf("enter the number of columns in an array\n");
    scanf("%d", &columns);
    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    int num, a,b;
    printf("enter the number\n");
    scanf("%d", &num);
    scanf("%d", &a);
    scanf("%d", &b);
    if(num%2==0)
    {
        for(int i=0;i<columns;i++)
        {
            int temp=arr[a-1][i];
            arr[a-1][i]=arr[b-1][i];
            arr[b-1][i]=temp;
        }
    }
    else
    {
        for(int i=0;i<rows;i++)
        {
            int temp=arr[i][a-1];
            arr[i][a-1]=arr[i][b-1];
            arr[i][b-1]=temp;
        }
        
    }
    /*
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (num%2 == 0)
            {
                int temps = arr[a-1][j];
                arr[a-1][j] = arr[b-1][j];
                arr[b-1][j] = temps;
            }
            else
            {
                int temps = arr[i][a-1];
                arr[i][a-1] = arr[i][b-1];
                arr[i][b-1] = temps;
            }
            
        }
        
    }
    */
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
/*
10 1 2 3 8 7 6  4
3 11 12 5 7 5 6 3 
13 10 3 4 9 7 5 4 
15 1 7 6 5 4 3 2 
9 8 7 4 3 2 1 11
6 7 4 3 9 5 6 7
*/