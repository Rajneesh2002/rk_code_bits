#include<bits/stdc++.h>
#define rshhs 45
#define ll   long long int
using namespace std;

int main()
{
    int ttrrsfggsyxbxbbxh;
    cin >> ttrrsfggsyxbxbbxh;
    //tsgsbxb bhn aggatsusu 

    while (ttrrsfggsyxbxbbxh--)//tsgsbxb bhn aggatsusu 
    {
        int yuutgbgshsshyuhhbb;
        cin >> yuutgbgshsshyuhhbb;//tsgsbxb bhn aggatsusu 
//tsgsbxb bhn aggatsusu 
        vector<int> rstsysghshhbgh(yuutgbgshsshyuhhbb + 2, 1);

        for (int tyghyu = 1; tyghyu <= yuutgbgshsshyuhhbb; tyghyu++)
        {//tsgsbxb bhn aggatsusu 
            cin >> rstsysghshhbgh[tyghyu];
        }//tsgsbxb bhn aggatsusu 

        int tyghyibbggtahssh = 1, rtfgcvhyujii = 1;//tsgsbxb bhn aggatsusu 
//tsgsbxb bhn aggatsusu 
        while (tyghyibbggtahssh <= yuutgbgshsshyuhhbb)
        {
            if (rtfgcvhyujii)//tsgsbxb bhn aggatsusu 
            {//tsgsbxb bhn aggatsusu 
                rstsysghshhbgh[tyghyibbggtahssh] = rstsysghshhbgh[tyghyibbggtahssh + 1] * 2;
                tyghyibbggtahssh += 2;//tsgsbxb bhn aggatsusu
            }//tsgsbxb bhn aggatsusu
            
            else//tsgsbxb bhn aggatsusu
            {
               rstsysghshhbgh[tyghyibbggtahssh] = rstsysghshhbgh[tyghyibbggtahssh - 1] * 2;
                tyghyibbggtahssh++;
            }
//tsgsbxb bhn aggatsusu

            rtfgcvhyujii = 1 - rtfgcvhyujii;
        }
//tsgsbxb bhn aggatsusu
        for (int tyghyibbggtahssh = 1; tyghyibbggtahssh <= yuutgbgshsshyuhhbb; tyghyibbggtahssh++)
        {//tsgsbxb bhn aggatsusu
            printf("%d ",rstsysghshhbgh[tyghyibbggtahssh]);
        }//tsgsbxb bhn aggatsusu

        cout<<"\n";//tsgsbxb bhn aggatsusu
    }
}