//height & diameter of Binary tree 

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

// height means no.of nodes between root node and leaf nodes
int calcHeight(node * root)
{
    if(root==NULL)
    {
        return 0;
    }

    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);

    return max(lheight,rheight)+1;
}

//diameter(width) is the longest path between any 2 end nodes(find no. of nodes)

int diameter(node*root)
{
    if(root==NULL) return 0;

    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left) + height(root->right) + 1;

    int ans=max(op1,max(op2,op3));
    return ans;
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

    cout<<calcHeight(root);

    return 0;
}