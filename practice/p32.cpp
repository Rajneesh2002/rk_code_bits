#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int n; cin>>n;
    int m=1e9+7;   
    while(n--)
    {
        vector<int> v;
        int a; cin>>a;
        int arr[a];
        for(int i=0;i<a;i++) cin>>arr[i];
        for(int i=0;i<a;i++) v.push_back(log2(arr[i]));
        int odd=0,even=0;
        for(int i=0;i<a;i++) 
        {
            if(v[i]%2==0) even++;
            else odd++;
        }
       
         if(odd!=0)
         {
             odd--;
             cout<<((int)pow(2,odd+even)-1)%m<<endl;

         }
         else
         {
             cout<<(int)(pow(2,even)-1)%m<<endl;

         }         
    }
    */
   /*
   vector<int> v1;
   vector<int> v2;
   int n; cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v1.push_back(x);
   }
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v2.push_back(x);
   }
   if(n%2!=0)
   {
       vector<int> c1;
       int c=0,y=0;
       for(int i=0;i<n/2;i++)
       {
           if(v1[i]!=v2[i]) c1.push_back(1);
           else c1.push_back(0);         
       }
      
       for(int i=0;i<n/2;i++)
       {
           while(c1[i]!=1) i++;
           if(c1[i]==1) c++;
           else
           {
               if(c>0){
                   y++;
                   c=0;

               } 

           }
       }
   }
   */
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int c=0,y=0;
  for(int i=0;i<n;i++)
  {
      
      if(a[i]==1) c++;
      else 
      {
          if(c>0)
          {
              y++;
              c=0;
          }
          else continue;
      }

  }
  cout<<y;

    return 0;
}
