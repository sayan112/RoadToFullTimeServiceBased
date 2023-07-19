#include <iostream>

class Base {
public:
    virtual void virtualFunction() {
        std::cout << "Base class virtual function" << std::endl;
    }
};

class Derived : public Base {
public:
    void virtualFunction() override {
        std::cout << "Derived class virtual function" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived(); // Pointer to a derived class object
    basePtr->virtualFunction();    // Calls the derived class function

    delete basePtr;
    return 0;
}

/*
  virtual is a keyword in c++
In C++, a virtual function is a member function of a base class that can be overridden by a derived class.It allows dynamic binding or late binding, which means that the appropriate function to call is determined at runtime based on the type of the object being referred to.

*/

#include <bits./stdc++.h>
using namespace std;
class Animal
{
public:
   virtual void color()
    {
        cout << "grey" << endl;
    }
};
class Dog : public Animal
{
public:
    void color()
    {
        cout << "black" << endl;
    }
};
int main()
{
    // Dog germanshepherd;
    // germanshepherd.color();
    Animal *baseptr;

//     Dog germanShephard;
//     baseptr= &germanShephard;
//  baseptr->color();

        Animal germanShephard;
        baseptr= &germanShephard;
     baseptr->color();
}


// Okay so when a virtual function is defined in base class then the pointer to the base class is created,  now on the basis of the type of object assigned ,  the respective  class functions called :)



// A pure virtual function is a virtual function in C++ for which we need not write any function definition and only have to declare it. It is declared by assigning 0 in the declaration.
// Syntax:

/*
  
  classA
{
 public:
     virtualvoids() = 0; // Pure Virtual Function };

     */

//  A pure virtual function (or abstract function) in C++ is a virtual function for which we can implement, But we must override that function in the derived class; otherwise, the derived class will also become an abstract class.
