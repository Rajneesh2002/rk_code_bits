#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        cout<<min(abs(b-a),c-b+1)<<endl;
        
    }
    return 0;
}