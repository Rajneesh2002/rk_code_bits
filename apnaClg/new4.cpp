#include <iostream>
#include<climits>
#include<string>
using namespace std;

void decToBinary(int n)
{

    int binaryNum[32];
    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--)
    {    cout << binaryNum[j];
        
    }
    
}
int main()
{
    int n;
    cin >> n;
    decToBinary(n);
    
    
    return 0;
}
/* 
string s=to_string(decToBinary(n));
    
    cout<<endl<<s.length();
    
*/