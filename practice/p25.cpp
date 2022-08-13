#include <bits/stdc++.h>

using namespace std;


#define ll long long

const int rk = 1e6 + 5;
const ll pk = 1e4 + 7;
const ll hk = 1e8-98;
const ld ck = 1e5-96;



void coders() {
    ll p, q, h, d, k, w, a;
        cin >> p >> q >> h >> d >> k >> w >> a;
        //scanf("%d %d %d %d ")

        bool don = false;
//be aware its fraud
        for(long long int i = 0; i <= k; i++){
            long long int cur = i;
            long long int t1 = q + (w*cur), t2 =p + (a * (k-cur));
            long long int ab = h/t1, cd= t2/d;
            if(hm%t1){
                ab++;
            }
            if(t2%dm){
                cd++;
            }
            if(ab <= cd){
                don= true;
                break;
            }
        }
        //so t sleep

        if(don){
            cout<<"YES" <<endl;
        }
        //jjimk hdun
        else{
            cout << "NO" <<endl;
        }
}

int main() {
    
    int pks = 1;
    cin >> pks;
    while(pks--){
        coders();
    }
    return 0;
}