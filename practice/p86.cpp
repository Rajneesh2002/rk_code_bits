#include<iostream>
using namespace std;


bool isPalindrome(int x) {
        string s;
        while(x)
        {
            s+=to_string((x%10));
            x=x/10;
        }
        int n=s.length();
        
        
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
        
}

int main()
{
    int n; cin>>n;
    cout<<isPalindrome(n);

    return 0;
}