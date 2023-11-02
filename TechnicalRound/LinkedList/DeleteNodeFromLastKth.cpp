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
    Node *temp=head;
    //  while (temp)
    //  {
    //     cout << temp->data << endl;
    //     temp=temp->next;
    //  }
     
      if(k==1)
      {
        Node *tempNode=head;
         head=head->next;
          delete(tempNode);
           return ;
      }

      int size =0;

       while (temp)
       {
      size++;
          temp=temp->next;

       }
        temp=head;
         if(size<k)
         {
             cout <<"Not possible to delete anything because its out of bounds" << endl;
         }
   
   Node *prev=NULL;
    int check=1;
  while (temp)
  {
  
      if(check==k)
      {
      cout << prev->data << endl;
        prev->next=temp->next;
   
         return;
      }
      prev = temp;
      temp = temp->next;
      check++;

  }
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
// checked with all testcases
    int k=4;
 
    DeleteKthNode(head,k);
    while (head)
    {
           cout << head->data << " ";
           head = head->next;
    }
}