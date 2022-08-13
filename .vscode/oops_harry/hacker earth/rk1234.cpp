#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;    
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
void take(int &x){
char t[8]; scanf("%s",t);
int a=(t[7]-48+10*(t[6]-48))+(t[4]-48+10*(t[3]-48))*60+(t[1]-48+10*(t[0]-48))*3600;
    *x=a;

}
int r(char t[]){
    

}
int main(){
    
    int x=1;
    int *ptr=x;
    int n; scanf("%d",&n);
    take(&ptr);    
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    
    int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum+=x/lcm(arr[i],arr[j]);
        }
    }
    cout<<sum;
    
    
    
    
    
    
    return 0;
    
}
