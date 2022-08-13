#include<bits/stdc++.h>
#dedine mod 1000000007
#define pb(i) push_back(i)
#define ll long long int
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define msl map<string,int>
#define fr(a,x) for(auto a:x)
#define ll1(p) ll p;cin>>p
#define ll2(p,q) ll p,q;cin>>p>>q
#define ll3(p,q,r) ll p,q,r;cin>>p>>q>>r
#define ll3(p,q,r,s) ll p,q,r,s;cin>>p>>q>>r>>s
#define ch1(p) char p;cin>>p
#define ch2(p,q) char p,q;cin>>p>>q
#define str1(p) string p;cin>>p
#define str2(p,q) string p,q;cin>>p>>q
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define vi vector<int>

#define ins(i) insert(i)
#define sz size()
#define all(x) x.begin(),x.end()
#define BOOST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(i,s,n) for(long long int i=s;i<n;i++)
#define rf(i,s,n) for(long long int i=s;i>=n;i--)
#define fit(x for(auto it=x.begin();it!=x.end();it++))
#define rfit(x for(auto it=x.rbegin();it!=x.rend();it++))
#define w(t) while(t--)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

using namespace std;
struct tree{
    int val;
    tree* right=NULL;
    tree* left=NULL;

};

ll b_expo(ll x,ll y,ll p=mod+3)
(ll res)



def gcd(a,b):
   if(b==0)
     return a
   return gcd(b,a%b)
n=int(input())     
arr=list(map(int,input().split()))
for i in range (len(arr)):
   for j in range(i+1,len(arr)):
     if gcd(arr[i],arr[j]) not in arr:
         arr.append(gcd(arr[i],arr[j]))
print(len(arr)-n)         
        