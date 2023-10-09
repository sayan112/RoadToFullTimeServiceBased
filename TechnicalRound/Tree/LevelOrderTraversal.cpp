#include<bits/stdc++.h>
using namespace std;
 struct Node {
    int data;
   struct  Node*left;
   struct Node*right;
    Node(int val)
    {
data=val;
left=NULL;
right=NULL;
    }
 };

 vector<vector<int>> levelOrderTraversal(Node *root)
 {
    vector<vector<int> >vec;
    queue<Node *> q;
    q.push(root);
    while (q.size())
    {
         int size=q.size();
         vector<int>lvl;
          for (int  i = 0; i < size; i++)
          {
              Node* node = q.front();
              q.pop();
              if(node->left)
              {
                q.push(node->left);
              }
              if (node->right)
              {
                
                q.push(node->right);
              }
              lvl.push_back(node->data);
          }
          vec.push_back(lvl);

     }

return vec;
 }
 
 
  int main()
 {
   struct Node*root= new Node(10);
 root->left= new Node(20);
  root->right= new Node(21);

  root->left->left = new Node(30);
  root->left->right = new Node(31);
  root->right->left = new Node(32);
  root->right->right = new Node(33);
  vector<vector<int>>ans= levelOrderTraversal(root);
   
   for(auto elem: ans)
   {
    for(auto elem1:elem)
    {
        cout << elem1<<" ";
    }
    cout <<endl;
   }
 }