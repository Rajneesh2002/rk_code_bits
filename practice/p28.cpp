// rk codechef strtrert
#include<bits/stdc++.h>
using namespace  std;
int main()

{
    //no of tets case
    int tc; cin>>tc;
    while(tc--)
    {
        int y; scanf("%d",&y);
        //my name rk
    int a1 = y,b1 = 0,c1 = y;
    // go gnh abajjann
    for(int k=0;k<31;k++) {
        if(!(c1&((1<<k)))){
            c1 = c1 | (1<<k);
            break;
        }
    }
    
    printf("%d %d %d\n",a1,b1,c1);
       
    }


    return 0;
}    
   
