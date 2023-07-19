//                                                 ******** Encapsulation *********
// Encapsulation  is about wrapping data and methods into a single class and protecting it from outside intervention.****
// Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

// Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc. Now,

// The finance section handles all the financial transactions and keeps records of all the data related to finance.
// Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.
// Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month.

// In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data.

// Two Important  property of Encapsulation

// Data Protection: Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
// Information Hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.

#include <iostream>
using namespace std;
class studentDetails
{
    // private data members
private:
    string name;
    int age;
    string address;

public:
    // public member functions

    // set method for student name to set  the value in private variable Name
    void setname(string name)
    {
        this->name = name;
    }
    // get method for student name to access private variable name
    string getname()
    {
        return name;
    }

    // set method for student age to set the value in private variable age
    void setage(int age)
    {
        this->age = age;
    }
    // get method for student age to access private variable age
    int getage()
    {
        return age;
    }
    // set method for student address to set the value in private variable address
    void setaddress(string address)
    {
        this->address = address;
    }
    // get method for student address to access private variable address
    string getaddress()
    {
        return address;
    }
};
int main()
{

    studentDetails sayan;
    // setting the values of the variables
    sayan.setname("Sayan Maitra");
    sayan.setaddress("West Bengal");
    sayan.setage(21);
    // Printing the values of student object
    cout << sayan.getname() << " ";
    cout << sayan.getaddress() << " ";
    cout << sayan.getage() << endl;
}