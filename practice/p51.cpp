#include<iostream>
using namespace std;

int countOperations(int num1, int num2) {
       static int op=0;
        
        if(num1==0||num2==0) return op;
        if(num1>=num2)
        {
            num1-=num2;
            op++;
            return countOperations(num1,num2);
        }
        else 
        {
            num2-=num1; op++;
            return countOperations(num1,num2);
        }
        
        
    }
int main()
{
    int a,b; cin>>a>>b;
    cout<<countOperations(a,b);


    return 0;
}