#include <iostream>
using namespace std;

void linSearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {

        if (arr[i] == key)
        {
            cout << "found at index " << i << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "not found.";
    }
}

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    int key;
    cin >> key;
    linSearch(arr, n, key);
    return 0;
}