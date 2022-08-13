#include<iostream>
using namespace std;

int proceed(int arr,int x,int y,int n)
{
    if(x<n&&y<n&&arr[x][y]!=-1){
        return 1;
    }
    return 0;
}

int sol(int **arr[],int x,int y,int n,int **sol_arr[])
{
    if(x==n-1&&y==n-1)
    {
        sol_arr[x][y]=1;
        return 1;
    }
    if(proceed(arr,x,y,n)){
        sol_arr[x][y]=1;
        if(sol(arr,x+1,y,n,sol_arr)){
            return 1;
        }
        if(sol(arr,x,y+1,n,sol_arr)){
            return 1;
        }
        sol_arr[x][y]=0;
        return 0;
    }
    return 0;
}
/*
int findSum(int arr,int n,int arr1)
{
    int sum=0;


}
*/
int main()
{
    int n; scanf("%d ",&n);
    int array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d ",&array[i][j]);
        }
    }
    int sol_array[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sol_array[i][j]=0;
        }
    }

    if(sol(array,0,0,n,sol_array))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",sol_array[i][j]);
            }
            printf("\n");
        }
    }

    
    return 0;
}