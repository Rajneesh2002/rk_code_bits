#include<iostream>
using namespace std;
int main(){
    /* ASCII--American Standard Code for Information Interchange
    A-65 a-97
    B-66 b-98
    .     .
    .     .
    .     . 
    Z-90 z-112
    */
   char temp='a';
   printf("%d",temp);//--->97
   printf("%c",temp);//--->a
   cout<<temp;  //--->97
   // creating character array
   char x[5]={'A','B','C','D','E'};
   char x[]={'A','B','C','D','E'};
   char x[5]={65,66,67,68,69};
   //all are same
   char x[5]={'A','B'};
   //  '\0'  ----> string delimeter/end of string char./null char./str. terminator
   //--------methods of declaring strings
   char name[10]={'j','o','h','n','\0'};
   char name[]={'j','o','h','n','\0'}; //array size=5
   char name[]="john";  //'\0' not needed,
   //printing string
   char name[10]={'j','o','h','n','\0'};
   printf("%s",name);
   scanf("%s",name); // dont need to type \0
   //reading entire sentence
   gets(name);  //Taj mahal 
   return 0;
}