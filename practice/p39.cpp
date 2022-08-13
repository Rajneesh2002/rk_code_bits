#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<int> ar;
        int a[n]; int b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        vector<int> v;
        
        v.push_back(a[0]);
        
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1]) v.push_back(a[i]);
        }
        //cout<<v.size();
        if(v.size()==n) cout<<n<<endl;
        else
        {
            

        }
        
        
         //int arr[1e5+1]={0};



        
    }
    return 0;
}