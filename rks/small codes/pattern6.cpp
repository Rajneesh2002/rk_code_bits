# include<iostream>
using namespace std;

int main(){
    int n=8;
    for (int i = 1; i<=n; i++)
    {
        if(i<5){
            for (int j = 1; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;

        }
        else{
            for (int k = 4; k>=i-4; k--)
        {
            cout<<"* ";
        }
        cout<<endl;

        }
        
        
    }
    


    return 0;
}