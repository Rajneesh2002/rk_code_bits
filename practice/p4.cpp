#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n; cin>>n;
    int c=0,i=4;
    while(n!=0)
    {
        if(n>=arr[i])
        {
            n-=arr[i];
            c++;
        }
        i--;

    }
    cout<<c;
    return 0;
}