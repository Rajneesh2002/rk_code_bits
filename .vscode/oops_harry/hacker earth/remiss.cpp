/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cout<<"1"<<endl;
        }
        else{
            cout<<a[i]+1<<endl;

        }
        
    }
    
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++){
        p[i]=1;
    }
    int **a;
    a=new int *[n];
    int x=0;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a[i]=new int[b];
        for(int j=0;j<b;j++){
            cin>>a[i][j];
        }
        int q=0;
        for(int j=0;j<b-1;j++){
            if(a[i][j]!=a[i][j+1]){
                q=1;
                break;
            }
            
        }
        if(q==0){
            p[x]=0;
        }
        x++;
        


    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
    
    return 0;
}

#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        s[i]="0";
    }
    
    for(int i=0;i<n;i++){
        if
    }
    
    for(int i=0;i<n;i++){
        cout<<s[i];
    }

    //reverse(s.begin(),s.end());

    //cout<<s;
    
    return 0;

}

#include<iostream>
#include<cmath>
using namespace std;
void ret(int n){
    if(n==1){
        cout<<"1"<<endl;
    }
    else{
        for(int i=1;i<powf(2,10);i++){
        if((n<powf(2,i)||n==powf(2,i))&&(n>powf(2,i-1)||n==powf(2,i-1))){
            cout<<powf(2,i)<<endl;
            break;

        }
        
    }

    }
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        ret(a[i]);
    }



    return 0;
}
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
class divi{
    int a,b;
    float c,d,e;
    public:
      divi(int,int);
      void printit(){
          cout<<"the point is ("<<a<<","<<b<<")"<<endl;
      }
      float distance(divi d1,divi d2){
          c=pow(d1.a-d2.a,2);
          d=pow(d1.b-d2.b,2);
          e=pow(c+d,0.5);
          return e;
      }
};
divi::divi(int x,int y){
    a=x;
    b=y;
}
int main()
{   
    divi d1(2,2);
    d1.printit();
    divi d2(5,8.9);
    d2.printit();
    cout<<"the distance is: "<<d2.distance(d1,d2)<<endl;
    
    return 0;
} 
*/
/*
#include<stdio.h>
int main(){
    float a,d,r;
    int n;
    scanf("%f%d%f%f",&a,&n,&r,&d);
    int i=1;
    float sum=0;
    while(i<=n){
        float p=a+(i-1)*d;
        
        float q=1;
        int x=1;

        
        while(x<i){
            q=q*r;
            x++;
        }
        printf("%.3f\n",q);
        sum=sum+(p*q);
        i++;
    }
    printf("%.3f",sum/3);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(!(a>=0&&b>=0)){
        printf("INVALID INPUT");

    }
    else{
        int rem1,rev1=0;
        int rem2,rev2=0;
        while(a!=0){
            rem1=a%10;
            rev1=rem1+rev1*10;
            a=a/10;
        }
        while(b!=0){
            rem2=b%10;
            rev2=rem2+rev2*10;
            b=b/10;
        }
        printf("%d",rev1+rev2);
    }
    return 0;
}

#include<stdio.h>
int main(){
    int i=1,j=1;
    int n;
    scanf("%d",&n);
    int a=0,b=0,c=0;
    int p=0;
    while(i<=3){
        while(j<=n){
            int k;
            scanf("%d",&k);            
            if(j==1){
                a=k;
            }
            else{
                if(k%2==0){
                    if(k<a){
                    a=k;
                     
                   }
                }
            }         
        j++;   
        }
        if(a>p){
            p=a;
        }
        
    i++;
    }
    
    printf("%d",p);
    return 0;
}

4 5 3 63 2 1 481 23 13 37 99 0 22 147 111 22 22 22 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    
    int arr[3][n];
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }

    }
    int p=0,q=0
    for(int i=0;i<3;i++){
        int a,b;
        a=b=arr[i][0];
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==0){
                if(arr[i][j]<a){
                a=arr[i][j];
                }

            }
            else{
                if(arr[i][j]>b){
                    b=arr[i][j];
                }
            }
            

        }
        if(a>p){
            p=a;
        }
        if()
    }
    cout<<p;
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
struct employees
{
    int n;
    char[n] id;
};

int main()
{
    struct employees e0, e1, e2;
    int num;
    char *ptr;
    printf("ABC pvt ltd. manages the employee id of other companies\n");

    for (int i = 0; i < 3; i++)
    {
        printf("enter the number of character of e%d\n", i);
        scanf("%d", &num);
        ptr = (char *)malloc(num * sizeof(char));
        printf("enter the employee id of e%d\n", i);
        scanf("%s", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("the following employee id of the e%d is %s", i, ptr[i]);
    }

    return 0;
}


#include<stdio.h>
int  main(){
    float a=0,b=0; 
    int n=0;
    int p;
    while(p!=0){
        scanf("%d",&p);
        if(p==0)
           break;
        a+=p; 
        b+=p*p;
        n++;       
    }
    float x=b/n;
    float y=a/n;
    float z=y*y;
    printf("%.2f",x-z);
      

    return 0;
}

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x,y,mx=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int p=a[i]*a[j];
            if(p>mx){
                x=a[i];
                y=a[j];
                mx=p;

            }

        }

    }
    cout<<min(x,y)<<"  "<<max(x,y);
    return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    int i=1;
    while(i<=n){
        string a,b;
        cin>>a>>b;
        int p=a.length();
        int q=b.length();
        for(int j=0;j<p;j++){
            for(int k=0;k<q;k++){
                if(a[j]==b[k]){
                    
                    
                    
                }
            }
        }

        i++;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

3
ADCB
BDCA
XXYYZ
XXZ
MNOPMNOP
ONNPM

#include<iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int a[n]={0};
    int i=0;
    while(i<n){
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        if(p==r||q==s){
            a[i]=1;
        }


        i++;
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


#include<iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int a[n]={0};
    int i=0;
    while(i<n){
        int p,q;
        cin>>p>>q;
        if(p>=q){
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    i++;
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

#include <stdio.h> 
#include<iostream>
using namespace std; 
   
int main()  
{  
    int n;
    int a;
    cin>>n>>a;
    int arr[n];
      
    //Displays original array  
    printf("Original array: \n");  
    for (int i = 0; i < n; i++) {   
        cin>>arr[i];   
    }    
      
    //Rotate the given array by n times toward left  
    for(int i = 0; i < a; i++){  
        int j, first;  
        //Stores the first element of the array  
        first = arr[0];  
      
        for(j = 0; j < n-1; j++){  
            //Shift element of array by one  
            arr[j] = arr[j+1];  
        }  
        //First element of array will be added to the end  
        arr[j] = first;  
    }  
      
     
      
    //Displays resulting array after rotation  
    printf("Array after left rotation: \n");  
    for(int i = 0; i < n; i++){  
        printf("%d ", arr[i]);  
    }  
    return 0;  
}  
#include<iostream>
using namespace std; 
string remo(string s){
    int done=0;
    while(done=0)
} 
int main()  {

    return 0;
}
--------------------for adding diagonal and anti diagonal elements
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n*n;
    int b=1;
    int sum1=0,sum2=0;
    int i=1,j=n;
    
    while (b<=a){
        int c;
        cin>>c;
        if(i==b){
            sum1+=c;
            i+=(n+1);            
        }
        if(j==b&&j<=((n-1)*n+1)){
            sum2+=c;
            //cout<<c<<endl;
            j+=(n-1);
        }
    b++;
    }
    cout<<sum1<<" "<<sum2;
    
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n*n;
    int b=1,sum1=0,sum2=0,i=1,j=n;
    while (b<=a){
        int c;
        scanf("%d",&c);
        if(i==b){
            sum1+=c*c;
            i+=(n+1);            
        }
        if(j==b && j<=(n*(n-1)+1)){
            sum2+=c*c;
            j+=(n-1);
        }
    b++;
    }
    if(sum1>=sum2){
        printf("%d",sum1-sum2);
    }
    else{
        printf("%d",sum2-sum1);
    }    
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){    
    int n;
    cin>>n;
    int a[n];    
    int i=0;
    while(i<n){
        int p;
        cin>>p;
        int  b=powf(10,p)-1;
        int c=(b/9)*7;
        a[i]=c;

        i++;
    }   
   for(int i=0;i<n;i++){
       cout<<a[i]<<endl;
   }    
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i=0;
    while(i<n){
        int p;
        cin>>p;
        if(p%2==0){
            a[i]=p+1;
        }
        else{
            a[i]=p-1;
        }


        i++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
} 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int z[n];
    for(int i=0;i<n;i++){
        cin>>z[i];
    }
    for(int i=0;i<n;i++){
        cout<<420-z[i]<<" "<<z[i]-69<<endl;
    }
    
    return 0;
}    

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i=0;
    while(i<n){

        int b;
        cin>>b;
        int c[b];
        int mins=10001;
        int sum=0;
        for(int j=0;j<b;j++){
            cin>>c[i];
            sum+=c[i];
            mins=min(mins,c[i]);
        }
        a[i]=sum-mins;


        i++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n]={0};
    int i=0;
    while(i<n){
        int p,q;
        cin>>p>>q;
        int b[p];
        int c=0;
        for(int j=0;j<p;j++){
            cin>>b[j];
            if(b[j]>q){
                c++;
            }
        }
        a[i]+=c;

    i++;
    }
    for(int j=0;j<n;j++){
            cout<<a[j]<<endl;
            
        }
    
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i=0;
    while(i<n){
        int len;
        cin>>len;
        string s1,s2;
        cin>>s1>>s2;
        char ch;
        for(int j=0;j<len;j++){
            if(s1[j]=='?'){
                if(s1[j]!=s2[j]){
                    ch=s2[j];
                    s1[j]=ch;

                }
            }
                
            
        }
        for(int j=0;j<len;j++){
            if(s2[j]=='?'){
                if(s2[j]!=s1[j]){
                    s2[j]=s1[j];

                }
            }
        }
        int c=0;
        for(int k=0;k<len;k++){
            if(s1[k]!=s2[k]){
                if(s1[k]=='a'||s1[k]=='e'||s1[k]=='i'||s1[k]=='o'||s1[k]=='u'){
                    if(!(s2[k]=='a'||s2[k]=='e'||s2[k]=='i'||s2[k]=='o'||s2[k]=='u')){
                        c++;
                    }
                    else{
                        c+=2;
                    }
                
                }
                else if(!(s1[k]=='a'||s1[k]=='e'||s1[k]=='i'||s1[k]=='o'||s1[k]=='u'))
                {
                    if(s2[k]=='a'||s2[k]=='e'||s2[k]=='i'||s2[k]=='o'||s2[k]=='u'){
                        c++;
                    }
                    else{
                        c+=2;
                    }
                    

                }
                
            }
        }
        
        a[i]=c;

        i++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    int sum1=0,sum2=1;
    while(a<=2){
        if(a==1){
            int i=1;
            int b=1;
            while(b<=n*n){
                int p;
                scanf("%d",&p);
                if(b==i){
                    sum1+=p;
                    i+=(n+1);
                }
            b++;
            }
        }
        else{
            int j=n;
            int k=1;
            while(k<=n*n){
                int q;
                scanf("%d",&q);
                if(k==j&&j<=((n-1)*n+1)){
                    sum2*=q;
                    j+=(n-1);
                }
            k++;
            }


        }
        a++;
    }
    if(sum1==sum2){
        printf("YES\n");
        printf("%d",sum1);
    }
    else{
        printf("NO\n");
        printf("%d %d",sum1,sum2);

    }
    return 0;
}

//4 2 3 4 1 5 3 2 1 6 4 3 3 2 3 1 7 2 6 -3 4 -2 -12 12 0 3 8 -5 4 1 3 2 4
// 3 5 3 1 5 3 2 6 1 4 2 -8 4 11 3 4 1 7 5
#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0;
    while(n!=0){
        cin>>n;
        a+=n;
    }
    cout<<a;
    
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    n=1;
    int pretty=0,ugly=0;
    while(n!=0){       
        scanf("%d",&n); 
                
        int rk=0;        
        if(n<0){
            ugly++;
        }
        else if(n>1){
            int b=0;
            
            for(int i=2;i<n;i++){
                if(n%i==0){
                        b=1;

                }
            }
            if(b==0){
                rk++;
            }
            if(n%6==0){
                rk++;
            }
            if(rk>0){

                pretty++;
            }
        }
    }
    printf("%d %d",pretty,ugly);    
    return 0;
}
/*
int a,b,c=0;
for( a=1;a<=n;a++){
        for(b=1;b<=n;b++){
            if(((a*2)*(b*3))==n){
                cout<<a<<" "<<b;
                c=1;
                break;
            }
        }
        if(c==1){
            break;
        }
    }

    
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;

        }
    }
    if(a==0){
        cout<<"prime";
    }
    else{
        cout<<"no";
    }
}

#include<iostream>
using namespace std;
int main(){
    int d,init,count=0;
    long int a,b;
    cin>>a>>b;
    long int c=b-a+1;
    long int arr[c];
    for(int i=0;i<c;i++){
        arr[i]=a++;
    }
    d=arr[0];
    for(int i=1;i<c-1;i++){
        d=d&arr[i];
        if(d==0){
            
        }
        cout<<d<<" ";
        
    }
    cout<<count;
    

    return 0;
}



if(d==0){
            d=arr[i+1]|arr[i+2];
            count++;

        }

        
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i=0;
    while(i<n){
        int p,q,r;
        cin>>p>>q>>r;
        if(p+q>r){
            a[i]=1;
        }
        else if(p+q==r){
            a[i]=3;
        }
        else{
            a[i]=2;
        }

     i++;   
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cout<<"TRAIN"<<endl;
        }
        else if(a[i]==2){
            cout<<"PLANEBUS"<<endl;
        }
        else if(a[i]==3){
            cout<<"EQUAL"<<endl;
        }
    }
    return 0;
}     

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    int p=0;
    while(p<n){
        int a,b;
        cin>>a>>b;
        string r;
        cin>>r;
        for(int i=b;i>=1;i--){
            reverse(r.begin(),r.end()-(a-i)); 

        }
        s[p]=r;


        p++;
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    
    return 0;
}

string s="bbaaaba";
    int k=5;
    for(int i=k;i>=1;i--){
        reverse(s.begin(),s.end()-(s.length()-i)); 
        cout<<s<<endl;       
    }
   
    
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rk[n];
    int r=0;
    while(r<n){
        int q;
        cin>>q;
        int a[q];
        int p=-990;

        for(int i=0;i<q;i++){
             cin>>a[i];
        }
        for(int i=0;i<q;i++){
            for(int j=0;j<q;j++){
                for(int k=0;k<q;k++){
                    if(i!=j && j!=k && k!=i){
                        p=max(p,(a[i]-a[j])*a[k]);

                    }
                }
            }
        }
        rk[r]=p;


        r++;
    }
    for(int i=0;i<n;i++){
        cout<<rk[i]<<endl;
    }
    return 0;

}

#include<stdio.h>

int main()
{
    //  Insert your code here.
    int i,j,n,squa,num;
    int sum1=0;
    int sum2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j){
                scanf("%d",&num);
                squa=num;
            sum1=sum1+squa;
            continue;
        }
        /*
        if(j==((n+1)-i)){
            scanf("%d",&num);
            squa=num*num;
            sum2=sum2+squa;}  
        }
        
    }
    /*
    if(sum1>=sum2){
    printf("%d",sum1-sum2);
    }
    else {
        printf("%d",sum2-sum1);
    }
    
   printf("%d",sum1);
    return 0;
}

#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",str);
    int i=0,count=0;
    while(str[i]!='.'){
        if(i==0){
            printf("%s",str[i]);
            count++;
        }
        else{
            if(str[i]!=str[i-1]){

                printf("%s",str[i-1]);
                printf("%d",count);
                count=0;
            }
            else{            
                count++;
            }

        }
        
     i++;
    }
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0,count=0;
    while(s[i]!='.'){
        if(i==0){
            if(s[i]!=s[i+1]){
                cout<<s[i];
                count=0;
            }
            else{
                count++;
            }
        }
        else{
            if(s[i]==s[i-1]){
                count++;

            }
            else if(s[i]!=s[i-1]){
                if(count==1){
                    cout<<s[i-1];
                    count=1;
                }
                else if(count>1){
                    cout<<s[i-1]<<count;
                    count=1;

                }
                
            }
        }


     i++;
    }
    
    return 0;

}

//sum of elements in swastik
#include<stdio.h>
int main(){
    int row,col;  scanf("%d %d",&row,&col);
    int i,j; 
    int col_mid=(col+1)/2,row_mid=(row+1)/2,sum=0;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){        
            int a; scanf("%d",&a);
            if(i==1){
                if(j==1 || j>=col_mid) sum+=a;
            }
            else if(i>1 && i<row_mid){
                if(j==1||j==col_mid) sum+=a;
            }
            else if(i==row_mid) sum+=a;
            else if(i>row_mid && i<row){
                if(j==col_mid||j==col) sum+=a;
            }
            else{
                if(j<=col_mid||j==col) sum+=a;
            }
        }    
    }
    printf("%d",sum);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){    
    int a[5]={4,6,9,3,2};    
    sort(a,a+5);
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        if(a>=b){
            b+=c;
            if(a>=b){
                b+=d;
                if(a>=b){
                    cout<<"N"<<endl;
                }
                else{
                    cout<<"S"<<endl;
                }
            }
            else{
                a+=d;
                if(a>=b){
                    cout<<"N"<<endl;
                }
                else{
                    cout<<"S"<<endl;
                }

            }
        }
        else{
            a+=c;
            if(a>=b){
                b+=d;
                if(a>=b){
                    cout<<"N"<<endl;
                }
                else{
                    cout<<"S"<<endl;
                }
            }
            else{
                a+=d;
                if(a>=b){
                    cout<<"N"<<endl;
                }
                else{
                    cout<<"S"<<endl;
                }
            }            
        }        
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        if(s.find("code")<s.find("chef")){
            cout<<"AC"<<endl;
        }
        else{
            cout<<"WA"<<endl;
        }

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while(t--){    
    int n,k; scanf("%d%d",&n,&k);
    string s;  cin>>s;
    int x=0,sum=0;
    for(int i=0;i<n-k+1;i++){
        x=x^stoi(s.substr(i,k));
    }
    while(x!=0){
        sum+=x%10;
        x=x/10;
    }
    printf("%d\n",sum);
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; cin>>n;
        int i;
        for(i=2;i<n;i++){
            if(n%i==0){
                cout<<i<<endl;
                break;
            }
        }
        if(i==n){
            cout<<n<<endl;
        }
    }

    return 0;
}   *
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n+1]={0};
    int i=2;
    while(n!=1){
        while(i<=n){
            if(n%i==0){
                 n=n/i;
                a[i]++;

            }
            i++;
           
        }
        

    }
    for(int k=2;k<=n;k++){
        cout<<a[k]<<endl;
    }
    
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    return n*(n+1)/2;
}
int main(){
    int n; cin>>n;
    while(n--){
        int a,b,s1,c; cin>>a>>b;
        c=a-1;
        s1=sum(b);
        
        while(c--){
            s1=sum(s1);
        }    
          
        cout<<s1<<endl;
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int rem;
    while(b!=0){
        rem=a%b;
         a=b;
        b=rem;
       
    }
    return a;
}
int main(){
   // int t; cin>>t;
    int a,b; cin>>a>>b;
    /*
    while(t--){
        int a,b; cin>>a>>b;
        cout<<gcd(a,b)<<endl;
        
    }
    
   cout<<gcd(a,b);
    return 0;
}

#include <stdio.h>
void starpattern(int num)
{
    for (int i = num / 2; i <= num; i += 2)
    {
        for (int j = 1; j < num - i; j += 2)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j < num - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = num; i >= 1; i--)
    {
        for (int j =1; j <num; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    starpattern(num);
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    
    for(int i=0;i<=n;i+=2){

        for(int j=0;j<n;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    
    
    for(int i=0;i<(n+1)/2;i++){

        for(int j=0;j<n/2;j++){
            if(i+j<n/2){
                cout<<" ";
            }
            else{
                cout<<" *";
            }
        }
        cout<<endl;
    }
    
    /*
    for(int i=0;i<=n;i+=2){

        for(int j=0;j<n;j++){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<" *";
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}
------>printing heart
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        string b=s;
        reverse(s.begin(),s.end());
        if(b==s) cout<<"YES"<<endl;        
        else cout<<"NO"<<endl;  
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    if(s[n-1]=='o') cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    string s;  cin>>s;
    int a[26]={0};
    int m=-9;
    for(int i=0;i<s.length();i++){
        a[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        m=max(m,a[i]);
    }
    for(int i=0;i<26;i++){
        if(m==a[i]){
            printf("%c",i+97);
        }
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            if(b%2==0) cout<<b/2<<endl;
            else cout<<(b+1)/2<<endl;
        }
        else if(a>1){
            if(a%2==0){
                if(b%2==0) cout<<(a*b)/4<<endl;
                else cout<<(a*(b+1))/4<<endl;
            }
            else{
                if(b%2==0) cout<<((a+1)*b)/4<<endl;
                else cout<<((a+1)*(b+1))/4<<endl;

            }
            
            
        }
    }
    return 0;
}
/*
if(b%2==0) cout<<((a+1)*b)/4<<endl;
            else cout<<((b+1)*(a+1))/4<<endl; 
            
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        long long int a,med; cin>>a;
        long long int sum=0;
        long long int b[a];
        for(int i=0;i<a;i++){
            cin>>b[i];
            sum+=b[i];

        } 
        long long int mean=sum/a;
        sort(b,b+a);
        if(a%2==0) med=b[(a/2)-1];
        else med=b[(((a+1))/2)-1];
        int d;
        if(mean>med){
            cout<<(sum-(med*a))<<endl;
        }
        else if(med>mean){
            cout<<med*a-sum<<endl;
        }
        else if(mean==med){
            cout<<"0"<<endl;
        }
        
        

    }
    return 0;   
}        

static StringBulider sb=new StringBuilder();
static void solve() throws exception{

    int n=br.ni();
    int []a=br.niarr(n);
    int ans=0;
    int pow=1;
    for(int j=0;j<32;j++){
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0) count++;
            a[i]/=2;
        }
        if(count>1){
            ans=ans+(pow);
        }
        pow*=2;
    }
    sb.append(ans+"\n");
}

#include<stdio.h>
int main(){
    int n;  scanf("%d",&n);
    char a[n];  scanf("%s",a);
    int p;  scanf("%d",&p);
    while(p--){
        int x,y;  scanf("%d%d",&x,&y);
        char max='0';
        for(int i=x;i<=y;i++){
            if(a[i]>max) max=a[i];
        }
        printf("%c",max);    
    }
    return 0;
}



#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.

int max_of_four(int a, int b, int c, int d){
    if(a>b&&a>c&&a>d) return a;
    else if(b>c&&b>a&&b>d) return b;
    else if(c>b&&c>a&&c>d) return c;
    else return d;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
----------------------------------------------------->
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        int a; cin>>a;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a;j++){
                cout<<"1"<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
*/
// 1 2 3
/* --------------------------------------------------------->
#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        if(n==1{
            if(x%2==0){
                cout<<"EVEN"<<endl;
            }
            else{
                cout<<"ODD"<<endl;
            }
            continue;
        }
        if(x%2==1){
            if(n%2==0) cout<<"even\n";
            else cout<<"odd\n";
        }
        else cout<<"impossible\n";
        
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1; cin>>t;
    while(t--){
        int m,x;
        cin>>m>>x;
        m--;
        int arr[x];
        arr[0]=1;
        int pl;
        for(int i=1;i<x;i++){
            pl=(m%(i+1))+1;
            if(arr[i-1]<pl)
            arr[i]=arr[i-1];
            else arr[i]=arr[i-1]+1;
        }
        for(int i=0;i<x;i++){
            cout<<arr[i]<<' ';
        }
    }

    return 0;
}
 
//whatsapp grp coders1 question------------------------------------>

#include<bits/stdc++.h>
using namespace std;
void findSubstring(string s,int n){
    int len=s.length();
    int c1=0;
    int arr[len-n+1]={0};
    for(int i=0;i<len;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') c1++;
    }
    if(c1==0) cout<<"Not found!";
    string s1;
    for(int i=0;i<len-n+1;i++){
        s1=s.substr(i,n);
        int c2=0;
        for(int j=0;j<n;j++){
            if(s1[j]=='a'||s1[j]=='e'||s1[j]=='i'||s1[j]=='o'||s1[j]=='u') c2++;
        }
        arr[i]+=c2;
    }    
    int mx=-2345;
    for(int k=0;k<len-n+1;k++) mx=max(mx,arr[k]);
    for(int p=0;p<len-n+1;p++){
        if(mx==arr[p]){
            cout<<s.substr(p,n);
            break;                       
        }
   }         
}

int main(){
    string s; int n;
    cin>>s>>n;
    findSubstring(s,n);
    return 0;
}

//harsh iit coding test rase & lcm---------------------------------------------------->
#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;    
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){    
    int n; scanf("%d",&n);
    string t; cin>>t;
    int a=(t[7]-48+10*(t[6]-48))+(t[4]-48+10*(t[3]-48))*60+(t[1]-48+10*(t[0]-48))*3600;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    } 
    int sum1=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum1+=a/lcm(b[i],b[j]);
        }
    }
    int l=lcm(b[0],b[1]);
    for(int i=2;i<n;i++) l=lcm(b[i],l);
    cout<<sum1<<endl<<a/l;    
    return 0;
    
}
*/
#include <iostream>
using namespace std;

int main() {
	//code
	
	    int n,key; cin>>n>>key;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    while(key--){
	    int x=arr[0];
	    for(int i=0;i<n-1;i++){
	        arr[i]=arr[i+1];
	    }
	    arr[n-1]=x;
	    }
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	    cout<<"\n";
	
	return 0;
}
/*
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20 */