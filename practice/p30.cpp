#include<bits/stdc++.h>
using namespace std;
#include<deque>
int main()
{

    deque<int> a;
    int n; cin>>n;
    for(int i=1;i<=n;i++) a.push_back(i);
    
    deque<int> :: iterator it=a.begin();
    deque<int> :: iterator it1=a.end();
    
   
    a.push_front(*it1);
    for(;it!=a.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    
    return 0;
}
/*
while(a.size()!=1)
    {
        a.pop_back();
        it--;
        a.push_front(*it);

    }
    cout<<a.size();
    */