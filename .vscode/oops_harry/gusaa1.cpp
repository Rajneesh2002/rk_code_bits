#include <iostream>
using namespace std;

int func(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int main()
{
    int size;
    cin >> size;
    int arr[size];
    cout<<func(arr,size);

    return 0;
}