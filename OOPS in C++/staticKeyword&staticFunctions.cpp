/*

 Static Keyword :

 The static keyword has different meanings when used with different types. We can use static keywords with:

Static Variables: Variables in a function, Variables in a class
Static Members of Class: Class objects and Functions in a class Let us now look at each one of these uses of static in detail.
Static Variables
Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call. This is useful for implementing coroutines in C/C++ or any other application where the previous state of function needs to be stored.

*** Static member variables can be accessed using the class name followed by the scope resolution operator ::, without requiring an object instance.




*/



 #include<bits./stdc++.h>
 using namespace std;

 class MyClass
 {
 public:
     static int count ; // declaration
 };

 int MyClass::count = 0; // definition and initialization


 int main()
 {
 
 cout << MyClass::count << endl;
  }

  /*

  Static functions in a class: Just like the static data members or static variables inside the class, static member functions also do not depend on the object of the class. We are allowed to invoke a static member function using the object and the ‘.’ operator but it is recommended to invoke the static members using the class name and the scope resolution operator (::). Static member functions are allowed to access only the static data members or other static member functions, they can not access the non-static data members or member functions of the class.

  */

  // C++ program to demonstrate static
  // member function in a class
#include <iostream>
  using namespace std;

  class GfG
  {
 public:
 // static member function
 static void printMsg() { 
    cout << "Welcome to GfG!";
     }
  };

  // main function
  int main()
  {
 // invoking a static member function
 GfG::printMsg();
  }

  /*

    The const keyword is used to declare that a variable or member function is constant, meaning its value or behavior cannot be modified.Here are the main uses and implications of the const keyword:

Constant Variables:

When a variable is declared as const, its value cannot be changed once it is initialized.
const variables must be initialized at the time of declaration, and any attempt to modify their value will result in a compilation error.

Example:

const int MAX_VALUE = 100;
// MAX_VALUE cannot be modified later



Constant Member Functions:

When a member function of a class is declared as const, it indicates that the function does not modify the state of the object on which it is called.
const member functions are useful for providing access to the object's state without allowing modifications.
Within a const member function, you can only call other const member functions and access const member variables.

class MyClass {
public:
    int getValue() const {
        // Cannot modify member variables
        return value;
    }
private:
    int value;
};

    */