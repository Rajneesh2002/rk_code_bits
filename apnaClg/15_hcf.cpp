// 15.2---Euclid algorithm---finding hcf of 2 numbers
#include<iostream>
using namespace std;
/*
example  -- a=42 & b=24
            rem= 42 % 24 = 18
            a=24 b=18
            rem= 24 % 18 = 6
            a=18 b=6
            rem= 18 % 6 =0
            a=6 b=0---->stop when b=0
 */  
int gcd(int a,int b){         
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}

                   