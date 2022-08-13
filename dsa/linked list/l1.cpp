#include<iostream>
using namespace std;
// 172 - about linked list
class node
{
    public:

        int data;
        node* next;
        node(int d)
        {
            data=d;
            next=NULL;
        }
};
int main(){
    node *p = new node(5);
    cout<<p->data;

    return 0;
}