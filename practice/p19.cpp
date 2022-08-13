
#include<bits/stdc++.h>
#include<set>
using namespace std;

int rk(vector<int> ar){
multiset < int > s;
multiset < int > :: iterator it;
int size = ar.size();
for(int i =0; i<size; i++)
{
    s.insert(ar[i]);
    it = s.upper_bound(ar[i]);
    if(it != s.end())
        s.erase(it);
    }
    return s.size();
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {

   
   int n,m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];

        
        cout << rk(a)+rk(b)<< '\n';
   }

 return 0;
}