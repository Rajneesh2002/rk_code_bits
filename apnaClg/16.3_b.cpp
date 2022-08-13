//2.function to replace 'pi' with '3.14' wherever there is 'pi' in a string
#include<iostream>
using namespace std;
string change(string s){
    int b=s.length();
    for(int i=0;i<b-1;i++){
        if(s.substr(i,2)=="pi"){
            b++;
            s.substr(i,2)=="3.14";
        }

    }
    return s;
    
}
int main(){
     string a="pippxxppiixipi";
     cout<<change(a);
    return 0;
}