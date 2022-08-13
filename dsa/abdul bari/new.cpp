#include<iostream>
#include<string>
using namespace std;
int main(){
    /*
    int n;
    cin>>n;
    int a=2*n;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i+=2){
        cout<<arr[i]+arr[i+1]<<endl;
    }
    */
   /*
   int n;
   cin>>n;
   int a=5*n;
   char arr[a];
   for(int i=0;i<a;i++){
       cin>>arr[i];
   }
   for(int i=0,int j=3;i<3;i++,j++){
       for(int j=3;j<5;j++){
           if(arr[i]==arr[j]){
               cout<<arr[i]<<endl;
               break;
           }
       }
   }
   */
  int n;
  cin>>n;
  string s[n];
  for(int p=0;p<n;p++){
      cin>>s[p];
  }
 int k=0;
 while(k<n){
    for(int i=0;i<s[k].length()-1;i++){
    for(int j=i+1;j<s[k].length();j++){
        if(s[k][j]<s[k][i]){
            char temp=s[k][j];
            s[k][j]=s[k][i];
            s[k][i]=temp;
            
           }
        }
    }
    k++;
 } 
 for(int p=0;p<n;p++){
      cout<<s[p]<<endl;
  }
    return 0;
}