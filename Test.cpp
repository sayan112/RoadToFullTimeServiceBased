#include <bits./stdc++.h>
using namespace std;

class A
{

public:
  void checkA()
  {
    cout << "hey its A";
  }

};

class B
{

public:
  void checkB()
  {
    cout << "hey its B";
  }

};

class C : public A,
          public B
{

public:
  void checkC()
  {
    cout << "hey its C";
  }

};

int
main()
{

  C obj;
  obj.checkA();
  obj.checkB();
  obj.checkC();
}