    #include<iostream>
    using namespace std;
    //function to print array element
    void arr(int ar[],int n){    //instead of[],we can use *, both will do same thing.
    for(int i=0;i<n;i++){        /*ar[1]=98 ,this will change the value at index 1 bcoz arrays
                                     are always passed by address */
        cout<<ar[i]<<endl;      
    }
    }
    //arrays are always passed by address
    
    int main(){
    int a[5]={0,1,7,23,56};
    arr(a,5);
    return 0;
    }