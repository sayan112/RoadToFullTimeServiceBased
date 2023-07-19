//                         ******* Abstraction ************
// Abstraction means providing only some of the information to the user by hiding its internal implementation details.
// We just need to know about the methods of the objects that we need to call and the input parameters needed to trigger a specific operation, excluding the details of implementation and type of action performed to get the result.

// Abstraction is selecting data from a larger pool to show only relevant details of the object to the user.It helps in reducing programming complexity and efforts.It is one of the most important concepts of OOPs.
// Real - life example : When you send an email to someone, you just click send, and you get the success message;
// "what happens when you click send, how data is transmitted over the network to the recipient is hidden from you(because it is irrelevant to you)."
// We can implement Abstraction in C++ using classes.The class helps us to group data members and member functions using available access specifiers.A Class can decide which data members will be visible to the outside world and not .Access specifiers are the main pillar of implementing abstraction in C++.We can use access specifiers to enforce restrictions on class members.

// It allows you to provide custom implementations for operators, enabling objects of your class to be manipulated using operators just like built-in types. Operator overloading can lead to more readable code by providing a concise and natural syntax. For example, with operator overloading, you can write result = object1 + object2 instead of calling a specific member function like result = object1.add(object2).


#include <bits/stdc++.h>
using namespace std;
class implimentation
{
private:
    int a;
    int b;
    int result;

public:
// code reusability increases
    void plus(int a, int b)
    {
        result = a + b;
    }
    int getresults()
    {
        return result;
    }
};

int main()
{
    implimentation ab;
    ab.plus(10, 20);
    cout << ab.getresults();
}

// Advantages Of Abstraction 
//  ●Only you can make changes to your data or function, and no one else can.
//  ●It makes the application secure by not allowing anyone else to see the background details. 
//  ●Increases the reusability of the code. 
//  ●Avoids duplication of your code.