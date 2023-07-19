// Inheritance is one of the key features of Object - oriented programming in C++.It allows us to create a new class(derived class) from an existing class(base class).

//Inheritance is one of the fundamental concepts in object - oriented programming(OOP) , that allows a class to inherit properties and behaviors from another class.In C++, inheritance provides a way to create a new class(derived class) based on an existing class(base class).The derived class inherits the members(data members and member functions) of the base class, thereby reusing and extending its functionality.

// The derived class inherits the features from the base class and can have additional features of its own.
// Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

// Why and when to use inheritance?

// Consider a group of vehicles. You need to create classes for Bus, Car, and Truck. The methods fuelAmount(), capacity(), applyBrakes() will be the same for all three classes. If we create these classes avoiding inheritance then we have to write all of these functions in each of the three classes as shown below figure:

// check *inhertance1stPicture*

// You can clearly see that the above process results in duplication of the same code 3 times.This increases the chances of error and data redundancy.To avoid this type of situation, inheritance is used.If we create a class Vehicle and write these three functions in it and inherit the rest of the classes from the vehicle class, then we can simply avoid the duplication of data and increase re - usability.Look at the below diagram in which the three classes are inherited from vehicle class:
// Using inheritance, we have to write the functions only one time instead of three times as we have inherited the rest of the three classes from the base class(Vehicle).

// Modes of Inheritance

// Public mode : If we derive a subclass from a public base class.Then, the base class’s public members will become public in the derived class, and protected class members will become protected in the derived class.

// Protected mode : If we derive a subclass from a Protected base class.Then both public members and protected members of the base class will become protected in the derived class.

// Private mode : If we derive a subclass from a Privatebase class.Then both public members and protected members of the base class will become Private in the derived class.

/*

Example: Suppose we have three classes with names:

 car, bicycle, and truck.
  The properties for each are as follows:
  Car ➔Colour ➔Max Speed ➔Number of Gears
 Bicycle ➔Colour ➔Max Speed ➔Is foldable?
 Truck➔Colour ➔Max Speed ➔Max weight

  From above, we can see that two of the properties: Colour and MaxSpeed, are the same for every object. Hence, we can combine all these in one parent class and make three classes their subclass. This property is called Inheritance. Technically, inheritance is defined as the process of acquiring the features and behaviors of a class by another class. Here, the class that contains these members is called the base class, and the class that inherits these members from the base class is called the derived class of that base class.

#include <bits/stdc++.h>
using namespace std;

class vechile
{
public:
  string color;
  int max_speed;
};

class car : public vechile
{
  int num_gears;
};
class bicycle : public vechile
{
  bool is_foldable;
};
class truck : public vechile
{
  int max_weight;
};



*/

// **********Base class is in public and Child class in public then data members are  inherited in public , we can use it in outside and inside of the class

/*
#include<bits/stdc++.h>
using namespace std;
 class Human {
  public:
   int height;
    int weight;
    int age;
     public:
       void setheight(int height)
       {
         this->height = height;
       }
       void setweight(int weight)
       {
        this->weight=weight;
       }
       void setAge(int age)
       {
        this->age = age;
       }
       int getAge()
       {
        return this->age;
       }
       int getheight()
       {
        return this->height;
       }
       int getweight()
       {
        return this->weight;
       }

 };
 class Male : public Human
 {

 public :
  string color;
  void setcolor(string color)
       {
         this->color = color;
       }

       string getcolor()
       {
         return this->color;
       }
 };

  int main ()
  {
     Male sayan;
      sayan.setcolor("white");
      sayan.setweight(65);
      sayan.setAge(21);
      sayan.setheight(5);
     cout <<  sayan.getAge()<<" ";
    cout <<   sayan.getcolor()<<" ";
     cout<< sayan.getheight()<<" ";
     cout << sayan.getweight();
  }

*/

// ********** in Base class any data member is in  public and Child class in protected then data members are also inherited in protected way 

#include<bits/stdc++.h>
                                                                                                                                                                                                                                                                                       using namespace std;
 class Human {
  public:
   int height;
    int weight;
    int age;
     public:
       void setheight(int height)
       {
         this->height = height;
       }
      //  void setweight(int weight)
      //  {
      //   this->weight=weight;
      //  }
       void setAge(int age)
       {
        this->age = age;
       }
       int getAge()
       {
        return this->age;
       }
       int getheight()
       {
        return this->height;
       }
      //  int getweight()
      //  {
      //   return this->weight;
      //  }

 };
 class Male : protected Human
 {

 public :
  string color;
  void setcolor(string color)
       {
         this->color = color;
       }

       string getcolor()
       {
         return this->color;
       }

       // 
        void setweight(int weight)
        {
          this->weight=weight;
        }
        int getweight()
        {
           return this->weight;
        }
 };

  int main ()
  {
     Male sayan;
      sayan.setcolor("white");
      // all the variables other than color is going to trow us error , because they can't be accecesable from outside of the class 
      sayan.setweight(65);
    //   sayan.setAge(21);
    //   sayan.setheight(5);
    //  cout <<  sayan.getAge()<<" ";
    // cout <<   sayan.getcolor()<<" ";
    //  cout<< sayan.getheight()<<" ";
     cout << sayan.getweight();
  }

//  in Base class any data member is in  public and Child class in private then data members are also inherited in private way

#include<bits/stdc++.h>
using namespace std;
 class Human {
  public:
   int height;
    int weight;
    int age;
     public:
       void setheight(int height)
       {
         this->height = height;
       }
      //  void setweight(int weight)
      //  {
      //   this->weight=weight;
      //  }
       void setAge(int age)
       {
        this->age = age;
       }
       int getAge()
       {
        return this->age;
       }
       int getheight()
       {
        return this->height;
       }
      //  int getweight()
      //  {
      //   return this->weight;
      //  }

 };
 class Male : private Human
 {

 public :
  string color;
  void setcolor(string color)
       {
         this->color = color;
       }

       string getcolor()
       {
         return this->color;
       }
// here weight is in public in the base class but the class male / child class is in private so , u cant access it directly outside in the class , so using get , set method u can access it, (and use it in the child class inside only)
        void setweight(int weight)
        {
          this->weight = weight;
        }
         int getweight()
         {
           return this->weight;
         }
 };

  int main ()
  {
     Male sayan;
      sayan.setcolor("white");
      sayan.setweight(65);
    //   sayan.setAge(21);
    //   sayan.setheight(5);
    //  cout <<  sayan.getAge()<<" ";
    // cout <<   sayan.getcolor()<<" ";
    //  cout<< sayan.getheight()<<" ";
     cout << sayan.getweight();
  }
