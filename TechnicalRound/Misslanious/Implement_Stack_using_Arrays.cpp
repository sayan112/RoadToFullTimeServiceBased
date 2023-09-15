#include<bits/stdc++.h>
using namespace std;
 class Stack
 {
 int size;
  int top ;
  int  *arr;
  public:
   Stack()
   {
    size=1000;
     top=-1;
     arr = new int[size];
   }
    void  Push(int value)
    {
  top++;
  arr[top]=value;
    }
   void  Pop()
   {

    top--;
   
   }
    int Top()
    {
    int topvalue = arr[top];
     return topvalue;
    }
    int Size()
    {
        return top+1;
    }

 };
int main()
{
    //  stack<int>st;
    //  st.push(1);
    //   st.push(2);
    //   st.push(3);
    //   // lifo 
    // while(st.size())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

// last in first out 


Stack s;

s.Push(1);
s.Push(2);
s.Push(3);
while(s.Size())
{
    cout << s.Top() << endl;
    s.Pop();
}

// 3 2 1
}