/*
OOPS stands for Object-Oriented Programming (OOP). It is a programming methodlogy that organizes software design around objects, which are instances of classes. In object-oriented programming, objects are the fundamental building blocks used to represent real-world entities or abstract concepts. OOP focuses on encapsulating data (attributes) and behavior (methods) into objects, allowing for modular and reusable code.

*/


#include <bits/stdc++.h>
using namespace std;

// class
class Hero
{
private:
    // has properties like health, height, weight and color
    // private data members
    int health=20;

public:
    // setter and getter methods
    //public member functions
    void set_health(int health)
    {
        
        this->health = health;
    }
    void get_health()
    {
        cout << "get health called"
             << " ";
        cout << health << endl;
    }
};

int32_t main()
{
    // its creation of object
    Hero saktiman;
    // example of encampulation also :)
    saktiman.set_health(100);
    saktiman.get_health();

    return 0;
}

// In object - oriented programming(OOP) with C++,

// A class is a blueprint or template that defines the structure and behavior of objects.  A class encapsulates data members (properties) and member functions (methods) that operate on those data members.

// An object, on the other hand, is an instance of a class. It is created from the class blueprint and represents a specific entity or element that has its own unique state and behavior. You can create multiple objects from the same class, each with its own distinct data values.

// Access specifier defines how the members of the class can be accessed. In C++, there are 3 types of access specifiers: public, private, and protected.
// Access specifier
// public: members can be accessed outside the class.
// private: members cannot be accessed outside the class.
// protected: members cannot be accessed(viewed) from outside the class, but can be accessed in inherited classes(subclasses).

class Dog
{                        // class ClassName
public:                  // Access specifiers
    string breed, color; // Data members

    void displayColor()
    { // Member functions
        cout << color << " ";
    }

    void displayBreed()
    {
        cout << breed << " ";
    }
}; // end with semicolon
