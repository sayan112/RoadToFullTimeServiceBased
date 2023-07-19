// #include<bits/stdc++.h>
// using namespace std;
//  class Human  {
//      public:
//      // if u make access modifier to private , then data members cant be inherited
//     string color;
//      int age ;
//       public:
//        string setGetColor(string color)
//        {
//          this->color = color;
//          return color;
//        }
//        void sleep()
//        {
//          cout <<"ge a proper sleep"<<endl;
//        }
//  };

//   class sayan: public Human {
//      public:
//       string fav;
//        void favorite()
//        {
//          cout <<" you are my fav ";
//        }
//   };
//  int main ()
//  {
//       sayan Obj;
//       cout << Obj.setGetColor("blue")<<endl;
//           cout << Obj.age;
//       cout << Obj.color;
//  }

#include <bits/stdc++.h>
using namespace std;
class Human
{
public:
    // if u make access modifier to private , then data members cant be inherited
    string color;
    int age;

public:
    string setGetColor(string color)
    {
        this->color = color;
        return color;
    }
    void sleep()
    {
        cout << "get a proper sleep" << endl;
    }
};

class sayan : protected Human
// then if u use proteced only sayan / child , derived class only use the datamembers , outside the class u cant use it.
{
public:
    string fav;
    void favorite()
    {
        cout << " you are my fav ";
    }
      sayan()
      {
        setGetColor("black");
      }
    string GetColor()
    {
         return color;
    }
};
int main()
{
    sayan Obj;
  cout << Obj.GetColor();
  
}