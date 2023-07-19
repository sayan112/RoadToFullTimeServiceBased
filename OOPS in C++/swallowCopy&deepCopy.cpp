//                                        ******* Shallow Copy ***********
// An object is created by simply copying the data of all variables of the original object.Here, the pointer will be copied but not the memory it points to.It means that the original object and the created copy will now point to the same memory address, which is generally not preferred.
// his will create ambiguity and run - time errors
//  *** default copy constuctor perfroms swallow copy ***


#include <bits./stdc++.h>
    using namespace std;

class Hero
{
    // properties
private:
    int health;
    char level;

public:
    char *name;

    void print()
    {
        cout << endl;
        cout << "name: " << this->name << endl;
        cout << "Level: " << this->level << endl;
        cout << "health: " << this->health << endl;
    }

    Hero()
    {
        cout << "simple constructor called" << endl;
        name = new char[100];
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    void setLevel(char level)
    {
        this->level = level;
    }
     void setName(char name[])
    {
        strcpy(this->name, name);
        cout << name;
    }
};

int main()
{

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('A');
    char name[6] = "sayan";
    hero1.setName(name);
    hero1.print();
    Hero hero2(hero1); // here its usuing its default copy constructor
    hero2.print();

    // OUTPUT
    //  simple constructor called
    //  sayan
    //  name: sayan
    //  Level: A
    //  health: 12

    // name: sayan
    // Level: A
    // health: 12

    hero1.name[0] = 'L';
    hero1.print();
    hero2.print();

    // after changing the name is hero 1 name  , hero2 is algo getting changed

    // name: Layan
    // Level: A
    // health: 12

    // name: Layan
    // Level: A
    // health: 12
 //   this is called swallow copy
}




//                                               *********** Deep Copy ***************
// An object is created by copying all the fields, and it also allocates similar memory resources with the same value to the object. To perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well if required. Also, it is necessary to allocate memory to the other constructors’ variables dynamically. A deep copy means creating a new array and copying over the values. Changes to the array values referred to will not result in changes to the array data refers to.

#include <bits./stdc++.h>
using namespace std;

class Hero
{
    // properties
private:
    int health;
    char level;

public:
    char *name;

    void print()
    {
        cout << endl;
        cout << "name: " << this->name << endl;
        cout << "Level: " << this->level << endl;
        cout << "health: " << this->health << endl;
    }

    Hero()
    {
        cout << "simple constructor called" << endl;
        name = new char[100];
    }
     Hero(Hero &temp)
     {
        char *ch=new char[100];
        strcpy(ch,temp.name);
         this->name = ch;
          cout << "Copy constructor called" << endl;
           this->health=temp.health;
           this->level=temp.level;

     }
    void setHealth(int health)
    {
        this->health = health;
    }
    void setLevel(char level)
    {
        this->level = level;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
        cout << name;
    }
};

int main()
{

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('A');
    char name[6] = "sayan";
    hero1.setName(name);
    hero1.print();
    Hero hero2(hero1); // here its usuing user defined copy constructor
    hero2.print();


    hero1.name[0] = 'L';
    hero1.print();
    hero2.print();

}

// OUTPUT
//  simple constructor called
//  sayan
//  name: sayan
//  Level: A
//  health: 12
//  Copy constructor called

// name: sayan
// Level: A
// health: 12

// look here only hero 1 name is changed , hero 2 name is not changed bcz its deep copy 
// name: Layan
// Level: A
// health: 12

// name: sayan
// Level: A
// health: 12

// In C++, a shallow copy of an object is a copy where the copied object simply points to the same memory address as the original object. This means that any changes made to the copied object will also affect the original object, as they both refer to the same data in memory.

// On the other hand, a deep copy in C++ creates a completely independent copy of the original object. In this case, a new memory space is allocated for the copied object, and all the data from the original object is copied into this new memory space. Consequently, the copied object and the original object have different memory addresses.

// Therefore, it is correct to say that in a shallow copy, the original object and the created copy will point to the same memory address, while in a deep copy, they will have different memory addresses.