#include<bits/stdc++.h>
using namespace std;
 class ListNode {
    public:
    int data ;
     ListNode *next;
     public:
     ListNode(int data)
     {
        this->data = data;
        this->next =NULL;
     }
 };
 int main ()
 {

ListNode *s1= new ListNode(1);
ListNode *s2= new ListNode(2);
ListNode *s3= new ListNode(3);
s1->next=s2;
s2->next=s3;
ListNode *head=s1;
ListNode *temp=head;

while (temp)
{
    cout << temp->data<<endl;
    temp=temp->next;
}

temp=head;
// reverse the linkedlist


ListNode *newHead=NULL;
while (temp)
{
    ListNode *nextNode = temp->next;
    temp->next = newHead;
    newHead = temp;
    temp = nextNode;
}

temp = newHead;

while (temp)
{
    cout << temp->data << endl;
    temp = temp->next;
}
 }
