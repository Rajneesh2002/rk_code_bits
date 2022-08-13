#include<bits/stdc++.h>
using namespace std;

int count(string s)
{
    int a=s.length();
    int c=0;
    for(int i=0;i<a-1;i++)
    {
        
            if(s[i]=='1'&&s[i+1]=='0') c++;
        
    }
    if(s[a-1]=='1') c++;
    return c;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, x;
        cin >> a;
        vector<int> p;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            p.push_back(x);
        }
        vector<int> q;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            q.push_back(x);
        }
        

        
        int ans=0;
        for(int i=0;i<a;i++)
        {
            if(p[i]!=q[i]&&p[i]!=q[a-i-1]){
                ans=-1;
                break;
            }
            else continue;
        }
        if(ans==-1) cout<<-1<<endl;
        else{
            string s="";
            if(n%2==0)
            {
                for(int i=a/2+1;i<a;i++)
                {
                    if(p[i]==q[i]) s+='0';
                    else s+='1';
                }

            }
            else{
                for(int i=a/2;i<a;i++)
                {
                    if(p[i]==q[i]) s+='0';
                    else s+='1';
                }

            }
            cout<<count(s)<<endl;


        }
        


    }
    return 0;
}