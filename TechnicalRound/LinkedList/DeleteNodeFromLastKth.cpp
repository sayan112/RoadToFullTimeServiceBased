#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void DeleteKthNode  (Node *&head , int k )
{
    cout<<"hey"<<endl;
     Node *temp=head;
      int size =0;
     while(temp!=NULL)
     {
         temp=temp->next;
 size++;
     }
     if(size==k)
     {
        Node*tempnode=head;
        head=head->next;
        delete (tempnode);
        return;
     }
      temp=head;
      Node*prev=NULL;
    //   cout << size<<endl;
       int needsize=size-k;
       cout << needsize<<endl;


        while (true)
        {
           if(needsize!=0)
           {
               prev=temp;
               temp=temp->next;
        
           }
           else{
             break;
           }
           needsize--;
        }
         cout << prev->data<<endl;
         cout << temp->data<<endl;
          prev->next=prev->next->next;
          delete(temp);
     return;
}
int main()
{
    Node *One = new Node(1);
    Node *Two = new Node(2);
    Node *Three = new Node(3);
    Node *Fourth = new Node(4);
    One->next = Two;
    Two->next = Three;
    Three->next = Fourth;

        Node *head = One;

    int k=4;

    DeleteKthNode(head,k);
    while (head)
    {
           cout << head->data << " ";
           head = head->next;
    }
}