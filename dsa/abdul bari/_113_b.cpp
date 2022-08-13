#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
// display function
void display(struct array arr)
{
    int i;
    cout << "Elements are" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}
// swap function
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void rearrange(struct array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[i] >= 0)
            j--;
        if (i < j)
        {
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}

int main()
{
    struct array arr = {{2, -3, 25, 10, -15}, 10, 5};
    // insertSort(&arr,1);
    // cout<<isSorted(arr)<<endl;
    //{{2,3,5,10,15},10,5};
    rearrange(&arr);
    display(arr);

    return 0;
}