/*
Polymorphism is considered one of the important features of Object - Oriented Programming.Polymorphism is a concept that allows you to perform a single action in different ways.Polymorphism is the combination of two Greek words.The poly means many, and morphs means forms.So polymorphism means many forms.Let’s understand polymorphism with a real - life example.Real - life example : A person at the same time can have different characteristics.Like a man at the same time is a father, a husband, and an employee.So the same person possesses different behavior in different situations.This is called polymorphism.
*/

/*

                                       Polymorphism
                                       /          \
                    Runtime Polymorphism       Compiletime Polymorphism






Compiletime Polymorphism -> This type of polymorphism is achieved by function overloading or operator overloading.
also called  static polymorphism , early binding

A. Function Overloading
When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. In simple terms, it is a feature of object-oriented programming providing many functions that have the same name but distinct parameters when numerous tasks are listed under one function name. There are certain Rules of Function Overloading that should be followed while overloading a function.

Below is the C++ program to show function overloading or compile-time polymorphism:



*/

/*

#include <bits./stdc++.h>
using namespace std;
class human
{
public:
  void speak()
  {
    cout << "speaking human with 0 parameters" << endl;
  }
  void speak( int a)
  {
    cout << "speaking human with 1 , int  parameters" << endl;
  }
  void speak(string a)
  {
    cout << "speaking human with 1 , string  parameters" << endl;
  }
  void speak(int a, int b )
  {
    cout << "speaking human with double  parameters" << endl;
  }
 };
  int main()
  {
    human sayan;
    // Function being called depends
    // on the parameters passed
    // speak() is called
    sayan.speak();
    sayan.speak(1);
    sayan.speak("sayan");
    sayan.speak(1,2);
  }


*/
/*
B. Operator Overloading :  C++ also provides options to overload operators. For example, we can make the operator (‘+’) for the string class to concatenate two strings. We know that this is the addition operator whose task is to add two operands. When placed between integer operands, a single operator, ‘+,’ adds them and concatenates them when placed between string operands.
           Points to remember while overloading an operator:
                                         ● It can be used only for user-defined operators(objects, structures) but cannot be used for in-built operators(int, char, float, etc.).
                                         ● Operators = and & are already overloaded in C++ to avoid overloading them.
                                         ●The precedence and associativity of operators remain


 #include <iostream>
using namespace std;
class Test
{
   private:
      int num;
   public:
       Test(): num(8){}
       void operator ++()         {
          num = num+2;
       }
       void Print() {
           cout<<"The Count is: "<<num;
       }
};
int main()
{
    Test tt;
    ++tt;  // calling of a function "void operator ++()"
    tt.Print();
    return 0;
}

*/
/*
Runtime Polymorphism
(Method overriding)

This type of polymorphism is achieved by Function Overriding. Late binding and dynamic polymorphism are other names for runtime polymorphism. The function call is resolved at runtime in runtime polymorphism. In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.

Runtime polymorphism is also known as dynamic polymorphism. Method overriding is a way to implement runtime polymorphism.

Method overriding: Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement. In other words, whatever methods the parent class has by default are available in the child class. But, sometimes, a child class may not be satisfied with parent class method implementation. The child class is allowed to redefine that method based on its requirement. This process is called method overriding.

Rules for method overriding:
●The parent class method and the method of the child class must have the same name.
●The parent class method and the method of the child class must have the same parameters.
●It is possible through inheritance only.

*/

#include <bits./stdc++.h>
using namespace std;
class Animal
{
public:
  void color()
  {
    cout << "grey" << endl;
  }
};
class Dog : public Animal
{
public:
// redefine your parent class method based on requirements , its called method overiding.
  void color()
  {
    cout << "black" << endl;
  }
};
int main()
{
  Dog germanshepherd;
  germanshepherd.color();
}