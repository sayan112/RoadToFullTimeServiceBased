#include <bits/stdc++.h>
using namespace std;
class Node
{
     public:
    int data;
     Node *left;
     Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void TraverseTreePreOrder ( Node * root)
{
     if(root==NULL)
     {
         return ;
     }
     cout << root->data<<endl;
     TraverseTreePreOrder(root->left);
     TraverseTreePreOrder(root->right);
}

void TraverseTreepostOrder(Node *root)
{

     if (root == NULL)
     {
         return;
     }
    
     TraverseTreePreOrder(root->left);
     TraverseTreePreOrder(root->right);
     cout << root->data << endl;
}
void TraverseTreeInOrder ( Node *root)
{

     if (root == NULL)
     {
         return;
     }

     TraverseTreePreOrder(root->left);
     cout << root->data << endl;
     TraverseTreePreOrder(root->right);

}

    int
    main()
{
    struct Node * root= new Node(5);
    root->left=new Node(4);
    root->right=new Node(6);
    root->left->left= new Node(10);
    root->left->right= new Node(11);
     TraverseTreePreOrder(root);
     TraverseTreepostOrder(root);
     TraverseTreeInOrder(root);
}
