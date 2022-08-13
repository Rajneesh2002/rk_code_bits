#include <iostream>
#include<string>                                      
using namespace std;


int main() {
      
    int n;
    cin>>n;
    string a[n];
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        
            int x=a[i].length();
            if(a[i].length()<11){
                cout<<a[i]<<endl;
            }
            else{
                cout<<a[i][0]<<x-2<<a[i][x-1]<<endl;
            }        
    }
    return 0;
}
/*
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
outputCopy
word
l10n
i18n
p43s
*/
