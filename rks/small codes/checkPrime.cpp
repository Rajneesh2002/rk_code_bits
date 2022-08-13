#include <iostream>
using namespace std;

void checkPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            cout<<"Composite"<<endl;
            break;

        }
    }
    if(i==n){
        cout<<"prime";
    }
}

int factors(int a){
    
    for (int j = 2; j < a; j++)
    {

        if (a % j == 0)
        {
            return j;

        }
        break;
    }
}
int main()
{
    int n;
    cin >> n;
    cout<<factors(n)<<endl;
    return 0;
}