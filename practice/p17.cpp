#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count;
    for(int i=0;i<n-1;i++)
    {
        count=1;
        for(int j=i+1;j<n;j++)
        {
            
            if(arr[i]!=0&&arr[i]==arr[j]){
                arr[j]=0;
                count++;
            }
        }
        if(arr[i]!=0)
        {
            if(count==1) cout<<arr[i]<<" is repeated "<<count-1<<" times"<<endl;
            else cout<<arr[i]<<" is repeated "<<count<<" times"<<endl;
        }

        
    }
    return 0;
}