#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={2,6,8,5,9,7};
    vector<int>:: iterator it;
    int n; cin>>n;
    it=find(v1.begin(),v1.end(),n);
    int i=it-v1.begin();
    cout<<v1[i];

    return 0;
}