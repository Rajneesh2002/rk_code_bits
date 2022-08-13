#include <iostream>
using namespace std;
int main()
{
    int n; //time comlexity=O(n^2)
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum;
    int req_sum;
    cin >> req_sum;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == req_sum)
            {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
    cout << "-1";

    return 0;
}