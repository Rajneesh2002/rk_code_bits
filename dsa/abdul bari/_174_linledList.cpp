#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
}*first=NULL;

//creating linked list
void create(int A[],int n){
    int i;
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        last->next=t;
        last=t;
    }
}

//function for displaying linked list
void display(struct node*p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

//function for searching
node* search(node *p,int key){
    while(p!=NULL){
        if(key==p->data)
          return p;
        p=p->next;
    }
    return NULL;
}

//recursion function for searching
node* Rsearch(node *p,int key){
    if(p==NULL)
      return NULL;
    if(key==p->data)
       return p;
    return Rsearch(p->next,key);     
}
int main(){
    int A[5]={3,6,9,2,12};
    create(A,5);
    //display(first);
    search(first,2);
    return 0;
}