// level order traversal and sum at k level

#include<iostream>
#include<queue>
using namespace  std;

class node
{
    public:
     int data;
     node* left;
     node* right;
    
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};

void lvl(node *root)
{
    if(root==NULL) return;

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* t=q.front();
        q.pop();

        if(t==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<t->data<<" ";
            if(t->left)
            {
                q.push(t->left);
            }
            if(t->right)
            {
                q.push(t->right);
            }
        }
    }
}


int sumAtK(node *root,int k)
{
    if(root==NULL) return -1;

    queue<node*> q;
    int lvl=0;
    int sum=0;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* t=q.front();
        q.pop();

        if(t==NULL)
        {
            lvl++;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            if(lvl==k) sum+=t->data;
            if(t->left)
            {
                q.push(t->left);
            }
            if(t->right)
            {
                q.push(t->right);
            }
        }
    }

    return sum;
}

int main()
{
    node*root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    //lvl(root);
    cout<<sumAtK(root,1);
    

    return 0;

}