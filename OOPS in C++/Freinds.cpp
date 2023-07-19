

//  ********* Purpose Of a Friend Function :) ************


// Okay so we know that the private section of any class is accessible only and only through the public section of the same class. what if we want to give access to the private member through a function which is outside of the class in such circumstances we use the concept of a friend function.


// Features of Friend Functions :)

//  A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.

// A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class. By declaring a function as a friend, all the access permissions are given to the function.

// The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.

// A friend function is called like an ordinary function. It cannot be called using the object name and dot operator. However, it may accept the object as an argument whose value it wants to access.

// A friend function can be declared in any section of the class i.e. public or private or protected.

// C++ program to create a global function as a friend
// function of some class

// Defination of a Friend function :) 

// Like a friend class, a friend function can be granted special access to private and protected members of a class in C++. They are the non-member functions that can access and manipulate the private and protected members of the class for they are declared as friends.

// A friend function can be:

// A global function
// A member function of another class

#include <iostream>
using namespace std;

class base
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend function declaration
    friend void friendFunction(base &obj);
};

// friend function definition
void friendFunction(base &obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

// driver code
int main()
{
    base object1;

    friendFunction(object1);

    return 0;
}
