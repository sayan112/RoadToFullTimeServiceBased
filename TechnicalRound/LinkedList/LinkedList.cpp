/*
A linked list is a linear data structure that includes a series of connected nodes.Here, each node stores the data and the address of the next node.For example,
          head->[data,address]->[data,address]->null


Linked lists can be of multiple types: singly, doubly, and circular linked list. In this article, we will focus on the singly linked list

Representation of Linked List
Let's see how each node of the linked list is represented. Each node consists:

A data item
An address of another node
We wrap both the data item and the next node reference in a struct as:

struct node
{
  int data;
  struct node *next;
};
          */

// Linked list implementation in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creating a node
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
void insertAtFront(Node *&head, int data)
{
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

void insertatlast(Node *&tail, int data)
{
  Node *temp = new Node(data);
  tail->next = temp;
  tail = temp;
}

void insertatNthposition(Node *&head, int position, int data)
{

  // if insert at first position
  if (position == 0)
  {
    insertAtFront(head, data);
    return;
  }

  Node *temp = head;
  int count = 1;
  while (count < position)
  {
    temp = temp->next;
    count++;
  }

  Node *nodetoinsert = new Node(data);
  nodetoinsert->next = temp->next;
  temp->next = nodetoinsert;
}
void print(Node *temp)
{
  while (temp != NULL)
  {
    cout << temp->data << endl;
    temp = temp->next;
  }
}

int main()
{
  Node *head;
  Node *one = new Node(1);
  Node *second = new Node(2);
  one->next = second;

  head = one;

  // print(head);
  // insert at front of list
  insertAtFront(head, 0);
  // insert at the last position of the list
  insertatlast(second, 100);
  // print(head);

  //  nth position insertion (middle)
  insertatNthposition(head, 1, 0);
  // nth position insertion (last)
  insertatNthposition(head, 2, 0);
  // nth position insertion (first)
  insertatNthposition(head, 0, 0);
  print(head);
}