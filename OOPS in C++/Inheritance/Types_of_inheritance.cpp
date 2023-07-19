// C++ supports five types of inheritance they are as follows:

// Single inheritance In single inheritance, one class can extend the functionality of another class. There is only one parent class and one child class in single inheritances.

//  class A -> class B
/*

 #include<bits/stdc++.h>
 using namespace std;
 class A
 {

 public:
    void checkA()
    {
         cout <<"A called"<<endl;
    }
 };

// single inheritance
 class B : public A
 {

public:
    void checkB()
    {
         cout << "B called" << endl;
    }
 };

 int main ()
 {
    B obj;
     obj.checkA();
     obj.checkB();
 }

*/

// Multiple inheritance In multiple inheritance, a class can inherit more than one class. This means that a single child class can have multiple parent classes in this type of inheritance.

/*


 class A     class B
     \        /
       class c
(single child can have multiple parent classes)

*/

/*

#include <bits/stdc++.h>
using namespace std;

class A
{


public:
 void checkA()
 {
 cout << " A is called" << endl;
 }

};

class B
{


 public:
 void checkB()
 {
 cout << " B is called" << endl;
 }
};

class C : public A,public B
{


 public:
     void checkC()
     {
 cout << " C is called" << endl;
 }

};

 int main ()
 {
     C obj;
     // in C class object we can access the A member function and B member function
      obj.checkA();
      obj.checkB();
      obj.checkC();
 }

 */

// Multilevel inheritance When a class inherits from a derived class, and the derived class becomes the base class of the new class, it is called multilevel inheritance. In multilevel inheritance, there is more than one level.

/*


 class A
     |
class B
     |
 class C


*/

/*
#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    void checkA()
    {
        cout << " A is called" << endl;
    }
};

class B : public A
{

public:
    void checkB()
    {
        cout << " B is called" << endl;
    }
};

class C : public B
{

public:
    void checkC()
    {
        cout << " C is called" << endl;
    }
};

int main()
{
    C obj;
    // in C class object we can access the B member functions  and B member function

    obj.checkA();
    obj.checkB();
    obj.checkC();
    // in B class object we can access the A member functions but not C member functions
    B obj1;
    obj1.checkA();
    obj1.checkB();
    //  obj1.checkC(); // not accessible

    // in A class object we can access ONLY A member functions
    A obj2;
    obj2.checkA();
}
*/


 //Hirerchial Inheritance
//In hierarchical inheritance, one class is a base class for more than one derived class.

/*
          class A
         /       \
    class B     class c
(parent class A have multiple childrens , means  more than one child can have one parent class)


*/

/*

#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    void checkA()
    {
        cout << " A is called" << endl;
    }
};

class B : public A
{

public:
    void checkB()
    {
        cout << " B is called" << endl;
    }
};

class C : public A
{

public:
    void checkC()
    {
        cout << " C is called" << endl;
    }
};

int main()
{
    C obj;
    // in C class object we can access the A member function and C  own member function
    obj.checkA();
    obj.checkC();
    B obj1;
    // in C class object we can access the A member function and C  own member function
    obj1.checkA();
    obj1.checkB();
}

*/

// Hybrid inheritance
// Hybrid inheritance is a combination of more than one type of inheritance.For example, A child and parent class relationship that follows multiple and hierarchical inheritances can be called hybrid inheritance.