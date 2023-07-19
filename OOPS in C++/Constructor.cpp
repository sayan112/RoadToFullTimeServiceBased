/*Consturctor in OOPS C++*/

#include <iostream>
using namespace std;

class smartphone
{
private:
    string model;
    int year_of_manufacture;
    bool _5g_supported;

public:
    smartphone(string model_string, int manufacture, bool _5g_support)
    {
        model = model_string;
        year_of_manufacture = manufacture;
        _5g_supported = _5g_support;
    }

    void print_details()
    {
        cout << "Model: " << model << endl;
        cout << "Year of Manufacture: " << year_of_manufacture << endl;
        cout << "5G Supported: " << _5g_supported << endl;
    }
};

int main()
{
    smartphone redmi("Note7pro", 2022, false);
    redmi.print_details();

    return 0;
}


/*

A constructor is a special member function of a class that is automatically called when an object of the class is created.It is used to initialize the object's data members and set up its initial state.

    The constructor has the same name as the class and does not have a return type,
    not even void.It is typically declared in the public section of the class.

like accoding to the above code By making the constructor public, you allow other parts of your program, such as the main function, to create objects of the smartphone class and initialize them with the desired values.

https: // www.codingninjas.com/studio/guided-paths/oops-in-c/content/265025/offering/3625223

Types of Constructors: There are three types of constructors in C++:
 ★ Default constructor
  ★ Parameterized Constructor
   ★ Copy Constructor

Default constructor : A constructor that doesn't take any argument or has no parameters is known as a default constructor. In the example above, class_name() is a default constructor.

class class_name
{
    int data_member1;
    string data_member2;
    // default constructor
public:
    class_name()
    {
        // initializing data members with their defaultvalues
        data_member1 = 69;
        data_member2 = "Coding Ninjas";
    }
};

*/


// Here, the class_name() constructor will be called when the object is created. This sets the data_member1 variable of the object to 69 and the data_member2 variable of the object to “Coding Ninjas”. Note: If we have not defined a constructor in our class, the C++ compiler will automatically create a default constructor with an empty code and no parameters, which will initialize data members with garbage values. When we write our constructor explicitly, the inbuilt constructor will not be available for us.

// Parameterized Constructor
// This is another type of Constructor with parameters.The parameterized constructor takes its arguments provided by the programmer.These arguments help initialize an object when it is created.To create a parameterized constructor, simply add parameters to it the way you would to any other function.When defining the constructor’s body, use the parameters to initialize the object.Using this Constructor, you can provide different values to data members of different objects by passing the appropriate values as arguments.

class class_name
{
    int data_member1;
    string data_member2; // parameterized constructor
public:
    class_name(int num, string str)
    { // initializing data members with values provided
        data_member1 = num;
        data_member2 = str;
    }
};

// Copy Constructor:
// These are a particular type of constructor that takes an object as an argument and copies values of one object’s data members into another object. We pass the class object into another object of the same class in this constructor. As the name suggests, you Copy means to copy the values of one Object into another Object of Class. This is used for Copying the values of a class object into another object of a class, so we call them Copy constructor and for copying the values.

// We have to pass the object’s name whose values we want to copy, and when we are using or passing an object to a constructor, we must use the &ampersand or address operator.



#include <bits/stdc++.h>
using namespace std;

class smartPhone {
    string model ;
     int year_of_manufacture;
     bool _5g_supported;
     public:
     // default constructor
     smartPhone(){
        model = "we dont know";
        year_of_manufacture=0;
        _5g_supported=false;
     }
     // parameterised constructor
     smartPhone(string model, int year_of_manufacture, bool _5g_supported)
     {
        this->model = model;
        this->year_of_manufacture = year_of_manufacture;
        this->_5g_supported = _5g_supported;
     }
     //copy constructor
     smartPhone( smartPhone &obj)
     {
        model=obj.model;
         year_of_manufacture=obj.year_of_manufacture;
          _5g_supported=obj.year_of_manufacture;
     }
         void print_details()
         {
             cout << "Model: " << model << endl;
             cout << "Year of Manufacture: " << year_of_manufacture << endl;
             cout << "5G Supported: " << _5g_supported << endl;
         }
};


int32_t main(){

  smartPhone unknown;

unknown.print_details();
 smartPhone minote5("MI0016_Note_Pro_5",2019,false);
 minote5.print_details();
 smartPhone minote6(minote5);
 minote6.print_details();

return 0;
}

/* in short
A constructor is a special type of member function that is called automatically when an object is created.
A constructor with no parameters is known as a default constructor.
a constructor with parameters is known as a parameterized constructor. This is the preferred method to initialize member data.
The copy constructor in C++ is used to copy data of one object to another.

*/