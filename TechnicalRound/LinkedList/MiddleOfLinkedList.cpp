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
Node* MiddleoflinkedList(Node *head)
{
    Node *slowpointer = head;
    Node *fastpointer = head;
    while (fastpointer != NULL && fastpointer->next != NULL)
    {
        fastpointer = fastpointer->next->next;
        slowpointer = slowpointer->next;
    }
    return slowpointer;
}
 int main()
{
    Node *One = new Node(1);
    Node *Two = new Node(2);
    Node *Three = new Node(3);
    One->next = Two;
    Two->next = Three;
    Node *head = One;

    Node * ans = MiddleoflinkedList(head);
    while (ans)
    {
        cout << ans->data << " ";
        ans = ans->next;
    }
}