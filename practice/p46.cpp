#include<bits/stdc++.h>
using namespace std;

int index(vector<int> arr,int key )
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==key) return i;
    }
    return -1;
}


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int na; cin>>na;
        vector<int> arr(na);
        for(int i=0;i<na;i++)
        {
            cin>>arr[i];
        }
        vector<int>::iterator it=arr.begin();
        it++;
        int f=0;
    for(int i=0;i<na;i++)
    {
        int mx=*min_element(it++,arr.end());
        
        int x=index(arr,mx);
        
        
            if(arr[i]&mx==0) 
            {
                f=1;
                break;

            }
            else swap(arr[i],arr[x]);
        
    }
    if(f==1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    

    }
    
    
    return  0;
}