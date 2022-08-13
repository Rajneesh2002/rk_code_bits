/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int q,rem;
    q=sum/4;
    rem=sum%4;
    cout<<q+rem;
    return 0;
}
*/
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {
    
    #include <iostream>

#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test_case;
    cin>>test_case;
    string s[test_case];
    for (int i=0;i<test_case;i++) {
        cin>>s[i];
    
    }
    
    for(int j=0;j<test_case;j++){
        
        for(int i=0;i<s[j].length();i+=2){
        cout<<s[i];
        }
        cout<<" ";
        for(int i=1;i<s[j].length();i+=2){
        cout<<s[i];
        }
    cout<<endl;
    }
    
    
    return 0;
}

    
    
    return 0;
}

