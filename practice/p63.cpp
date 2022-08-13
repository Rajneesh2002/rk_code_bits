#include<iostream>
using namespace std;
int main()
{
          int rk; cin>>rk;
          while(rk--)
          {
                    long long int pk,ck; cin>>pk>>ck;
                    long long int x=pk*pk;
                    cout<<(long long)ck/x<<endl;
          }
          return 0;
}