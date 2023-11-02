// *** Abstruction ***

// #include<bits/stdc++.h>
// using namespace std;
// class Implementation {
// private:

//   public:

//      int  plus(int data1, int data2)
//     {
//  return data1 + data2;
//     } 

// };


// int main()
// {
//   int a ,b;
//    cin>>a>>b;
//     Implementation ab;
//   cout <<   ab.plus(a,b); // abstruction 


// }



// *** Encaptulation ***

// #include<bits/stdc++.h>
// using namespace std;
// class Vehicle{
 // keeping data members private 
// private :
//  int fuelCapacity;
//  public:
//  // use setter and getter methods
//    void setFuelCapacity(int fueltank)
//    {
//     this->fuelCapacity = fueltank;
//    }
//     int getFuelCapacity()  {
//        return this->fuelCapacity;
//         }
// };
// int main ()
// {

//  Vehicle Bike ;
// Bike.setFuelCapacity(10);
// Bike.getFuelCapacity();

// }




// ** Inheritance *** 

// #include <bits/stdc++.h>
// using namespace std;
// class Vehicle {

// private:
// int FuelCapacity;
// int weight;
//  public:
//  void setFuelCapacity(int capacity)
//  {
//    this->FuelCapacity = capacity;
//  }
//  int getFuelCapacity()
//  {
//    return this->FuelCapacity;
//  }
// };

//  class Bike : public Vehicle{
//    private:
// string  color;
// public:
//  void setColor(string cl )
//  {
//  this->color=cl;
//  }
//   string getColor()
//   {
//  return this->color;
//   }
//  };

//     int32_t
//     main()
// {

//    Bike yamaha;
// yamaha.setFuelCapacity(10);
// yamaha.setColor("black");
// cout <<  yamaha.getColor();
// cout <<  yamaha.getFuelCapacity();

// }



// *** Polymorphism ***


// method overloading


// #include<bits/stdc++.h>
// using namespace std;

// class Human{

//  public:
 
//   string speak()
//   {
//     return "speak with 0 parameter";
//   }

//   string speak(int a)
//   {
//     return "speak with 1 parameter";
//   }

//   string speak(string temp)
//   {
//     return "speak with string  parameter";
//   }
//   string speak(int a, int b)
//   {
//     return "speak with 2 parameter";
//   }
// };


//  int main()
// {
//   Human sayan;
 
//  cout <<  sayan.speak(2,1);

//  }



// method overriding

// #include <bits/stdc++.h>
// using namespace std;
// class Human
// {
// public:
// void speak ()
// {
// cout << " hello speaking  from human";
// }
//  };
//  class Man : public Human{
// public:
// void speak()
// {
// cout << " hello speaking from man  ";
//  }

//  };

// int main ()
// {
// Man Sayan;
//  Sayan.speak();
// }



// operator overloading

// #include <iostream>
// using namespace std;
// class Test
// {
// private:
//   int num;

// public:
//   Test(){
//     num=8;
//   }
//   void operator++()
//   {
//     num = num + 2;
//   }
//   void Print()
//   {
//     cout << "The Count is: " << num;
//   }
// };
// int main()
// {
//   Test tt;
//   ++tt; // calling of a function "void operator ++()"
//   tt.Print();
//   return 0;
// }




// Friend functions

// #include <iostream>

// using namespace std;
// class Base
// {
// private:
//   int need;

// public:
//   Base()
//   {

//     need = 10;
//   }

//   friend void friendFunction(Base &obj);  // using friend keyword
// };

// void friendFunction(Base &obj)
// {
//   cout << obj.need << endl;
// }

// int main()
// {

//   Base Obj;
//   friendFunction(Obj);

//   return 0;
// }

