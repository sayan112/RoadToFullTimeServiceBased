
/*
  virtual is a keyword in c++
In C++, a virtual function is a member function of a base class that can be overridden by a derived class.It allows dynamic binding or late binding, which means that the appropriate function to call is determined at runtime based on the type of the object being referred to.
When a function is declared as virtual in a base class, it indicates that this function can be overridden in derived classes. 
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
    Dog germanshepherd;
    germanshepherd.color(); // Calls the overridden function in Dog class (black)
    Animal beagal;
    beagal.color(); // Calls the virtual function in Animal class (grey)
    // you create an object of type `Dog` and an object of type `Animal`.When you call the `color()` function on the `germanshepherd` object, it calls the overridden function in the `Dog` class, printing "black." When you call the `color()` function on the `beagal` object, it calls the virtual function from the `Animal` class, printing "grey."
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
