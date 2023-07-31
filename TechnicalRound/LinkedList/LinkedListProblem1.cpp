#include<bits/stdc++.h>
using namespace std;
 class Node {
    public:
    int data ;
    Node *next;
     Node(int data)
     {
        this->data = data;
        this->next =NULL;
     }
 };
int main()
{
    Node *One = new Node(1);
    Node *Two = new Node(2);
    Node *Three = new Node(3);
    One->next=Two;
    Two->next=Three;
    Node * head=One;
     while(head)
     {
        cout<< head->data<<" ";
        head=head->next;
     }
     

}