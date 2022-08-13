# include<iostream>
using namespace std;

int main(){
    /*
    int a=5;
    int b=4;
    for ( int i = 1; i <=5; i++)
    {
       if((i==1)||(i==5)){
           for (int j= 1; j <=4; j++)
           {
              cout<<"*";
           }
           cout<<endl;
           
       }
       else{
           cout<<"*"<<"  "<<"*"<<endl;
       }
    }
    */
   int n;
   cin>>n;
   for (int i = 1; i <=n; i++)
   {
       for (int j = n; j>0; j--)
       {
           if((j<=i)){
               cout<<" * ";
           }
           else{
               cout<<"   ";
           }
       }
       cout<<endl;
       
   }
 return 0;
}