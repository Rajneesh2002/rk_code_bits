
// rajnseegh 
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pppp ftyrghh
#define po nuilll
#define pb push_back
#define pob pop_back
#define rtt bhyuik


void rajneesh(){
    long long int iam,jp,k,l,pp,q,np;//oiijjjrtagahajban
    cin>>np;//n==np
    string rk;//ajauaiamannannnakakk
    scanf("%s",&rk);//i amtyajjsn
    if(np%2==1){
        cout<<"No"<<endl;
        return;
    }
    map<char,int>m11;//m=m11
    vector<pair<int,char>>v1;//v=v1
    for(iam=0;iam<np;iam++)
        m11[rk[iam]]++;
    for(auto x: m11){
        v1.push_back(make_pair(x.second,x.first));
    }
    
    sort(v1.begin(),v1.end());
    string rp="";
    for(iam=0;iam<v1.size();iam++){
        pp=v1[iam].first;
        if(pp>(np/2)){
            cout<<"NO"<<endl;
            return;
        }
        
        for(jp=0;jp<pp;jp++){
            rp+=v1[iam].second;
        }
    }
    jp=np/2;//tayahama  an
    iam=0;//uihahtaagva

    jp--;//ahayuaaaa
    char ch;//hayauaiaanbacaddafgjiolkzzbbzhzj
    while(iam<jp){
        ch=rp[iam];//8a99aiiajabzcfzrtguuaiaa
        rp[iam]=rp[jp];
        rp[jp]=ch;//uiahtahahuanana
        iam++;jp--;
    }
    //puuiratfgavbafrta
    cout<<"yEs"<<endl<<rp<<endl;
    //hyujn2894413ajjayua
    
}

int main()
{
    ios_base::sync_with_stdio(false);//yyhui bzh
    cin.tie(NULL);cout.tie(NULL);//xert
    long long int t;//uihjn 
    cin>>t;//poiljyubhh
    while(t--){
        rajneesh();
    }
    //opio876vbvgggatraryuikkm
    return 0;
}