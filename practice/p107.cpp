#include<iostream>
using namespace std;


long long int convert(int  n)
{
    long long int bin=0;
    long long int rem,i=1;
    while(n)
    {
        rem=n%2;
        n/=2;
        bin+=rem*i;
        i*=10;
    }

    return bin;
}
int main()
{
    uint16_t a; 
    cin>>a;   
    uint16_t x=a<<8;
    uint16_t y=a>>8;
    uint16_t z=y|x;
    cout<<z;

    return 0;
}