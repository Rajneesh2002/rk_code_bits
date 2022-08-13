#include<bits/stdc++.h>
using namespace std;

int check(vector<int>&arr,int n)
{
    vector<int>::iterator it=arr.begin();
    vector<int>::iterator it1;
    it++;
    for(int i=0;i<n;i++)
    {
        int mx=*min_element(it++,arr.end());
        it1=find(arr.begin(),arr.end(),mx);
        int index=it1-arr.begin();
        if((mx&arr[i])==0) {
            return 0;
        }
        else swap(arr[i],arr[index]);
    }
    return 1;
    
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int na; cin>>na;
        vector<int> ar(na);
        for(int i=0;i<na;i++)
        {
            cin>>ar[i];
        }
        if(check(ar,na)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    
    
    return  0;
}