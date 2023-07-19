/* a doubly linked list is a variation of the linked list data structure where each node contains a reference to both the next node and the previous node in the sequence. This allows for bidirectional traversal and efficient insertion and deletion operations at both ends and in the middle of the list.
 */


 #include<bits/stdc++.h>
  using namespace std;
 class Node {
     public:
    int data;
     Node * next ;
      Node * prev;

    Node( int data)
       {
      this->data=data;
       this->next=NULL;
        this->prev=NULL;
       }

 };

  void print (Node * temp)
  {
     while(temp)
     {
         cout << temp->data<<endl;
          temp=temp->next;
     }
  }
   int main ()
   {
     Node *one = new Node (10);
      Node *two = new Node (20);
       Node *three = new Node (30);
        one->next = two;
        two->next = three;
        two->prev = one;
        three->prev =two;
         Node * head=one;
          print(head);

   }