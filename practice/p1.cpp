#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int col=1,row=1,i,j,flag=0;
    for( i=0;i<5;i++){
        for( j=0;j<5;j++){
            if(a[i][j]==1){
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }
    col+=j; row+=i;
    
    if(col==3&&row==3) cout<<"0";
    else if(col==3||row==3)
    {
        if(col==3) cout<<abs(3-row);
        cout<<abs(3-col);
    }
    else{
        cout<<abs(3-row)+abs(3-col);
    }
    return 0;
}
/*
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
*/