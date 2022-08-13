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
void take(int n){
char t[8]; scanf("%s",t);

}
int r(char t[]){
    int a=(t[7]-48+10*(t[6]-48))+(t[4]-48+10*(t[3]-48))*60+(t[1]-48+10*(t[0]-48))*3600;
    return a;

}
int main(){
    
    
    int n; scanf("%d",&n);
    char t[8]; scanf("%s",t);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    
    /*
    
    int a=(t[7]-48+10*(t[6]-48))+(t[4]-48+10*(t[3]-48))*60+(t[1]-48+10*(t[0]-48))*3600;
    
    
    int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum+=a/lcm(arr[i],arr[j]);
        }
    } */
   
    return 0;
    
}