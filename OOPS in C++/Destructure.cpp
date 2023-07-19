#include <bits/stdc++.h>
using namespace std;

class car
{
public:
    int horsepower;
    car()
    {
        cout << " constuctor is called" << endl;
    }
    ~car()
    {
        cout << "destructor is called" << endl;
    } // destructor
};
int main()
{
    // object creation
    car marcedies;
    // at the end object destucted

    return 0;
}

//  When is a destructor called ?
//   A destructor function is called automatically when
//    ➔the object goes out of scope
//    ➔the program ends
//    ➔a scope(the {} parenthesis) containing local variable ends.
//    ➔a delete operator is called

//  Destructor rules->
//  ❖The name should begin with a tilde sign(~) and match the class name.
//  ❖There cannot be more than one destructor in a class.
//  ❖Unlike constructors that can have parameters, destructors do not allow any parameter.
//  ❖They do not have any return type, not even void.
//  ❖A destructor should be declared in the public section of the class.
//  ❖The programmer cannot access the address of the destructor.
//  ❖It has no return type, not even void.
//  ❖When you do not specify any destructor in a class, the compiler generates a default destructor and inserts it into your code.

// A destructor is a special member function with the same name as the class but preceded by a tilde (~). It is called automatically when an object is destroyed or goes out of scope. The purpose of a destructor is to clean up any resources allocated by the object, such as dynamic memory, file handles, or network connections.

//  Interview Questions  

// 1.Does C++ compiler create a default constructor when we write our own ? 

// In C++, compiler by default creates a default constructor for every class.But, if we define our own constructor, compiler doesn’t create the default constructor.

// 2.Explain constructor in C++?

//  A constructor is a special member function automatically called when an object is created.A constructor initializes the class data members with garbage value if we don’t put any value to it explicitly.

//  3.What do you mean by constructor overloading ? 

//  The concept of having more than one constructor with different parameters to perform a different task is known as constructor overloading.

//  4.Explain Destructor in C++ A destructor is a special member function that works just opposite to a constructor?

//  unlike constructors that are used for initializing an object, destructors destroy (or delete) the object. The purpose of the destructor is to free the resources that the object may have acquired during its lifetime. 

//  5.What is a copy constructor? 

//  These are a particular type of constructor that takes an object as an argument and copies values of one object’s data members into another object. In this constructor, we pass the class object into another object of the same class.

//  6.How many types of constructors are there? 

//  There are three types of constructors in C++:
//  ●Default constructor 
//  ●Parameterized Constructor
//  ●Copy Constructor 

//  7.When should the destructor use delete to free the memory?

//  If the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store, the destructor should use delete to free the memory.
 
//  8.What is the return type of constructor and destructor? 
//     They have no return type, not even void.