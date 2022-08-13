#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    
	
	int n; cin>>n;
	if(n==1) cout<<1<<endl;
    else
    {

    
        vector<int> v;

        int a=n,b=1;
	    if(n&1)
	    {
	        for(int i=1;i<=n/2;i++)
            {
                v.push_back(a);
                a--;
                v.push_back(b);
                b++;
            }
            v.push_back(b);
	    }
        else
        {
            for(int i=1;i<=n/2;i++)
            {
                v.push_back(a);
                a--;
                v.push_back(b);
                b++;
            }
        }
        for(auto i:v)
         cout<<i<<" ";
	    cout<<endl;
    }
	}
	return 0;
}
