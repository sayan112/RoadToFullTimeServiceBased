// Inheritance is one of the key features of Object - oriented programming in C++.It allows us to create a new class(derived class) from an existing class(base class).
 
//Inheritance is one of the fundamental concepts in object - oriented programming(OOP) , that allows a class to inherit properties and behaviors from another class.In C++, inheritance provides a way to create a new class(derived class) based on an existing class(base class).The derived class inherits the members(data members and member functions) of the base class, thereby reusing and extending its functionality.

// The derived class inherits the features from the base class and can have additional features of its own.
// Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.

// Sub Class : The class that inherits properties from another class is called Subclass or Derived Class.
// Super Class : The class whose properties are inherited by a subclass is called Base Class or Superclass.

// Why and when to use inheritance?

// Consider a group of vehicles. You need to create classes for Bus, Car, and Truck. The methods fuelAmount(), capacity(), applyBrakes() will be the same for all three classes. If we create these classes avoiding inheritance then we have to write all of these functions in each of the three classes as shown below figure:

// check *inhertance1stPicture*

// You can clearly see that the above process results in duplication of the same code 3 times.This increases the chances of error and data redundancy.To avoid this type of situation, inheritance is used.If we create a class Vehicle and write these three functions in it and inherit the rest of the classes from the vehicle class, then we can simply avoid the duplication of data and increase re - usability.Look at the below diagram in which the three classes are inherited from vehicle class:
// Using inheritance, we have to write the functions only one time instead of three times as we have inherited the rest of the three classes from the base class(Vehicle).

// Example: Suppose we have three classes with names:

//  car, bicycle, and truck.
//   The properties for each are as follows:
//   Car ➔Colour ➔Max Speed ➔Number of Gears
//  Bicycle ➔Colour ➔Max Speed ➔Is foldable?
//  Truck➔Colour ➔Max Speed ➔Max weight

//   From above, we can see that two of the properties: Colour and MaxSpeed, are the same for every object. Hence, we can combine all these in one parent class and make three classes their subclass. This property is called Inheritance. Technically, inheritance is defined as the process of acquiring the features and behaviors of a class by another class. Here, the class that contains these members is called the base class, and the class that inherits these members from the base class is called the derived class of that base class.

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




// Modes of Inheritance

// Public mode : If we derive a subclass from a public base class.Then, the base class’s public members will become public in the derived class, and protected class members will become protected in the derived class.

// Protected mode : If we derive a subclass from a Protected base class.Then both public members and protected members of the base class will become protected in the derived class.

// Private mode : If we derive a subclass from a Privatebase class.Then both public members and protected members of the base class will become Private in the derived class.




class A {
public:
	int x;

protected:
	int y;

private:
	int z;
};

class B : public A {
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A {
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
	// x is private
	// y is private
	// z is not accessible from D
};
