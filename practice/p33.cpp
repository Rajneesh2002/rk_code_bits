#include <bits/stdc++.h>
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
        
        int ch = 0;
        for (int i = 0; i < a; i++)
        {
            if (p[i] == q[i])
                ch++;
        }
        if (ch == a)
            cout << 0 << endl;
        else
        {

            if (a % 2 != 0)
            {
                int ch = 0;
                if (p[a / 2] != q[a / 2])
                    cout << -1 << endl;
                else
                {
                    string s="";
                    for(int i=0;i<a/2;i++)
                   {
                       if(p[i]==q[i]) s+='0';
                       else s+='1';
                    }

                   
                    for (int i = 0; i < a / 2; i++)
                    {
                        if (p[i] != q[i])
                        {
                            swap(p[i], p[a - 1 - i]);
                        }
                    }
                    int r = 0;

                    for (int i = 0; i < a; i++)
                    {
                        if (p[i] != q[i])
                        {
                            r = 1;
                            break;
                        }
                    }
                    if (r == 0)
                        cout << count(s) << endl;
                    else
                        cout << -1 << endl;
                }
            }
            else
            {
                vector<int>::iterator it1 = p.begin();
                vector<int>::iterator it2 = q.begin();
                p.insert(it1 + a / 2, -2);
                q.insert(it2 + a / 2, -2);
                int b = p.size();
                 string s="";
                 for(int i=0;i<b/2;i++)
                {
                          if(p[i]==q[i]) s+='0';
                         else s+='1';
                }

                for (int i = 0; i < b / 2; i++)
                {
                    if (p[i] != q[i])
                    {
                        swap(p[i], p[b - 1 - i]);
                    }
                }
                int r = 0;

                for (int i = 0; i < b; i++)
                {
                    if (p[i] != q[i])
                    {
                        r = 1;
                        break;
                    }
                }

                if (r == 0)
                    cout << count(s) << endl;
                else
                    cout << -1 << endl;
            }
        }
    }

    return 0;
}
/*
            vector<int> r1;
            vector<int> r2;

            for(int i=0;i<a;i++)
            {
                if(p[i]!=q[i]){
                    r1.push_back(p[i]);
                    r2.push_back(q[i]);

                } 
            }
            int rk=r1.size();
            if(rk%2!=0) cout<<-1<<endl;
            else
            {
                reverse(r1.begin(),r1.end());
                int pk=0;
                for(int i=0;i<rk;i++)
                {
                    if(r1[i]!=r2[i]) 

                    {
                        pk=1;
                        break;
                    }
                }
                

                
                if(pk==1) cout<<-1<<endl;
                else cout<<1<<endl;
                */