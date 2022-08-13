#include<iostream>
#include<list>
using namespace std;
/*
void display(list<int> &lst){
    list<int>::iterator it
    it=lst.begin();
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
}
*/
int main(){
    list<int> list1;
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(1);
    list1.sort();
    list<int>:: iterator it;
    it=list1.begin();
    cout<<*it++<<" ";
    cout<<*it++<<" ";
    cout<<*it++<<" ";
    cout<<*it++<<" ";
    cout<<*it++<<" ";
    


    return 0;
}