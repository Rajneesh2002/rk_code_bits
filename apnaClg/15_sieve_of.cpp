// 15.1.A --- sieve of eratosthenes--for printing prime numbers till n
#include<iostream>
using namespace std;

void primeSieve(int n){
    int prime[n]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    int c=0;
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            c++;
            cout<<i<<" ";
        }
    }
    cout<<endl<<"total no.of primes="<<c<<endl;
}
int main(){
    int n;
    cin>>n;
    primeSieve(n);
    return 0;
}