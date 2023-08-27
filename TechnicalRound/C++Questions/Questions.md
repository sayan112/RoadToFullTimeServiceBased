``text`

1. What is the difference between C and C++?
   The main difference between C and C++ are provided in the table below:

Here's a table summarizing the differences between C and C++ in various aspects:

| Aspect                            | C                              | C++                              |
| --------------------------------- | ------------------------------ | -------------------------------- |
| Programming Paradigm              | Funcation driven ,             | Object-oriented                  |
| Data Hiding, OOps                 | Does not support               | Supports through encapsulation   |
| Language Relationship             | C is a subset of C++           | C++ is a superset of C           |
| Function and Operator Overloading | Not supported                  | Supported                        |
| Namespace                         | Not present                    | Used to avoid name collisions    |
| Functions inside Structures       | Cannot be defined              | Can be defined                   |
| Memory Allocation/Deallocation    | calloc(), malloc(), and free() | new operator and delete operator |

2. What do you mean by call by value and call by reference?

In call by value method, we pass a copy of the parameter is passed to the functions. For these copied values a new memory is assigned and changes made to these values do not reflect the variable in the main function.

In call by reference method, we pass the address of the variable and the address is used to access the actual argument used in the function call. So changes made in the parameter alter the passing argument.

3.  What are destructors in C++?
    A constructor is automatically called when an object is first created. Similarly when an object is destroyed a function called destructor automatically gets called. A destructor has the same name as the constructor (which is the same as the class name) but is preceded by a tilde.

4.  What is Abstruction in C++?
    = Abstraction is the process of showing the essential details to the user and hiding the details which we don’t want to show to the user or hiding the details which are irrelevant to a particular user .

5.  What is a reference in C++?
    = A reference is like a pointer. It is another name of an already existing variable. Once a reference name is initialized with a variable, that variable can be accessed by the variable name or reference name both.

For example-

int x=10;
int &ref=x; //reference variable
If we change the value of ref it will be reflected in x.

6 . What are the C++ access specifiers?
= In C++ there are the following access specifiers:

Public: All data members and member functions are accessible outside the class.

Protected: All data members and member functions are accessible inside the class and to the derived class.

Private: All data members and member functions are not accessible outside the class

7. What is Friend Function in c++ ?
   = A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.

8. What is the difference between shallow copy and deep copy?
   =
   -> Shallow copy stores the references of objects to the original memory address, Shallow copy is faster , Shallow copy reflects changes made to the new/copied object in the original object.
   -> Deep copy makes a new and separate copy of an entire object with its unique memory address , Deep copy is Slower , Deep copy doesn’t reflect changes made to the new/copied object in the original object .

9. What is this pointer in C++?
   = The member functions of every object have a pointer named this, which points to the object itself.
   "this" allows you to access the current object's members and member functions from within its own member functions.

10. Which operator can not be overloaded in C++?
    = "::" 

11. What is an abstract class in c++?
    =
    In C++, an abstract class is a class that is designed to be used as a base class for other classes. It cannot be instantiated directly, meaning you cannot create objects of an abstract class. The primary purpose of an abstract class is to provide a common interface and define common functionality for its derived classes.

An abstract class typically contains one or more pure virtual functions, which are declared using the `virtual` keyword and have no implementation. A pure virtual function is denoted by appending `= 0` to its declaration. By including pure virtual functions, the abstract class specifies an interface that its derived classes must implement.

Here's an example of an abstract class in C++:

```cpp
class Shape {
public:
    virtual double calculateArea() const = 0; // Pure virtual function
    virtual void print() const = 0; // Pure virtual function
};
```

12. Define token in C++?
    = A token is the smallest individual element of a program that is understood by a compiler. A token comprises the following:

Keywords – That contain a special meaning to the compiler
Identifiers – That hold a unique value/identity
Constants – That never change their value throughout the program
Strings – That contains the homogenous sequence of data
Special Symbols – They have some special meaning and cannot be used for another purpose; eg: [] () {}, ; \* = #
Operators – Who perform operations on the operand

13. What is Function Overriding?
    = When a function of the same name, same arguments or parameters, and same return type already present/declared in the base class is used in a derived class is known as Function Overriding. It is an example of Runtime Polymorphism or Late Binding which means the overridden function will be executed at the run time of the execution.

14. Explain inheritance?
    = The capability or ability of a class to derive properties and characteristics from another class is known as inheritance. In simple terms, it is a system or technique of reusing and extending existing classes without modifying them.
    It allows us to create a new class(derived class) from an existing class(base class) , and inherit all of the properties of the base class.

15. When should we use multiple inheritance?
    = Multiple inheritances mean that a derived class can inherit two or more base/parent classes. It is useful when a derived class needs to combine numerous attributes/contracts and inherit some, or all, of the implementation from these attributes/contracts. To take a real-life example consider your Parents where Parent A is your DAD Parent B is your MOM and Chid C is you.

16. What is polymorphism in C++?

= Polymorphism is known as many forms of the same thing. In simple terms, we can say that Polymorphism is the ability to display a member function in multiple forms depending on the type of object that calls them.

In other words, we can also say that a man can be an employee to someone, a son of someone, a father of someone, and a husband of someone; this is how polymorphism can be projected in real life.

There is 2 type of polymorphism:

Compile Time Polymorphism
Function Overloading
Operator Overloading

Run Time Polymorphism

Function Overriding
Virtual Function

17. What is STL?
    = STL is known as Standard Template Library, it is a library that provides 4 components like container, algorithms, and iterators.

18. Inline Functions in C++?
    = A function is used to reduce the redundancy , as well as save the memory space when a function is invoked a bunch of task is performed like matching arguments ,matching the returns :( , but when the funcation defination is consist of one or two states mensts , there is noting to match the number of arguments , return type , so thats why c++ has somthing called as Inline function.
    // inline int cube(int s) { return s _ s _ s; }

19. What is an abstract class and when do you use it?
    = An abstract class is a class that is specifically designed to be used as a base class. An abstract class contains at least one pure virtual function. You declare a pure virtual function by using a pure specifier(= 0) in the declaration of a virtual member function in the class declaration
    Abstract Classes are a good fit if you want to provide implementation details to your children

20. When is void() return type used?
    = The void keyword, when used as a function return type, indicates that the function does not return a value.

21. Applications of C++?
    =
    Operating Systems : C++ is most widely used programming language and become an ideal choice for developing operating systems. Mac OS X has majority of parts written in C++ and Most of Microsoft’s software like Windows, Microsoft Office, IDE Visual Studio, and Internet Explorer are also written in C++.
    Games : C++ used for game development and companies use it as their first choice to develop gaming systems because C++ is very close to the machine so It can easily manipulate resources and able to built complex 3D games, multiplayer game, etc. Unreal game engine make games using C++.
22. C++ Basic syntax ->

    = Header File: we used the #include <iostream> statement to tell the compiler to include an iostream header file library which stores the definition of the cin and cout methods that we have used for input and output. #include is a preprocessor directive using which we import header files.


    Namespace: A namespace in C++ is used to provide a scope or a region where we define identifiers. It is used to avoid name conflicts between two identifiers as only unique names can be used as identifiers..,

    Identifiers : We use identifiers for the naming of variables, functions, and other user-defined data types. An identifier may consist of uppercase and lowercase alphabetical characters, underscore, and digits. The first letter must be an underscore or an alphabet.

Example:
int num1 = 24;
int num2 = 34;

Keywords
In the C++ programming language, there are some reserved words that are used for some special meaning in the C++ program. It can’t be used for identifiers.

For example, the words int, return, and using are some keywords used in our program. These all have some predefined meaning in the C++ language.

There are total 95 keywords in C++. These are some keywords.

int void if while for auto bool break

this static new true false case char class

23. Pointers & Refernces in C++?
    =

A reference variable is a "reference" to an existing variable, and it is created with the & operator:

Certainly! Both references and pointers in C++ provide the ability to manipulate data indirectly by working with memory addresses. This ability to directly access and modify memory can lead to more efficient code and improved performance compared to languages that do not have these features, such as Python and Java. Let's explore references and pointers in more detail:

References:

A reference is an alias or alternate name for an existing object.
It allows you to create a new name that refers to the same memory location as an existing variable.

```cpp
void increment(int& num) {
   num++;
}

int main() {
   int x = 5;
   int& ref = x;   // ref is a reference to x

   increment(ref); // Modify x through the reference

   std::cout << x; // Output: 6

   return 0;
}
```

Pointer : we can get the memory address of a variable by using the & operator , A pointer however, is a variable that stores the memory address as its value.

```cpp

string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

```

24. float vs. double?

=
float: A float is a single-precision floating-point type. It typically occupies 4 bytes (32 bits) of memory and provides about 7 decimal digits of precision.
double: A double is a double-precision floating-point type. It usually occupies 8 bytes (64 bits) of memory and provides about 15 decimal digits of precision.
Certainly! Here's an example that demonstrates the difference in precision between `double` and `float` types:

```cpp
#include <iostream>
#include <iomanip>

int main() {
    double doubleNum = 3.141592653589793238;
    float floatNum = 3.141592653589793238;

    std::cout << std::setprecision(17); // Set precision for output

    std::cout << "Double: " << doubleNum << std::endl;
    std::cout << "Float:  " << floatNum << std::endl;

    return 0;
}
```

Output:

```
Double: 3.14159265358979324
Float:  3.14159274101257324
```

In this example, we declare a `double` variable named `doubleNum` and a `float` variable named `floatNum`. Both variables are assigned the value of π (pi) with an extended number of decimal places.

When we output the values, we set the precision using `std::setprecision()` to display a higher number of significant digits.

You can observe that the `double` value retains more precision and accuracy compared to the `float` value. While the `double` value remains consistent with the assigned value of π, the `float` value introduces a small rounding error in the last few decimal places.

This demonstrates that `double` provides greater precision and accuracy with its larger number of significant digits compared to `float`.

25. Operators in C++
    = Arithmetic = + , -
    Logical = && , ||
    Comparison Operators = < , >

26. explain Do/While Loop?
    = do {
    // code block to be executed
    }
    while (condition);
    The example below uses a do/while loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:
    int i = 0;
    do {
    cout << i << "\n";
    i++;
    }
    while (i < 5);

27. What is pointer? Pointer of Pointer c++ ?
    = In programming, a pointer is a data type that stores the memory address of another variable or object in the computer's memory. Pointers are widely used in low-level programming and languages like C++ to enable direct memory manipulation and efficient memory access.

In C++, you can declare a pointer using the asterisk (\*) symbol. For example:

```cpp
int* ptr; // Declaration of an integer pointer named 'ptr'
```

To assign the address of a variable to a pointer, you use the address-of operator (&). For example:

```cpp
int x = 42;
int* ptr = &x; // 'ptr' now points to the memory address of 'x'
```

Now, 'ptr' contains the memory address where the integer variable 'x' is stored. By using the pointer, you can access or modify the value of 'x' indirectly.

A pointer to a pointer, also known as a double pointer, is a pointer that stores the address of another pointer. This concept is often used when dealing with multi-dimensional arrays or when you need to dynamically allocate memory for a pointer.

Here's how you can declare and use a pointer to a pointer in C++:

```cpp
int x = 42;
int* ptr1 = &x;    // Pointer 'ptr1' points to 'x'
int** ptr2 = &ptr1; // Pointer 'ptr2' points to 'ptr1'

// Accessing the value of 'x' using the double pointer 'ptr2'
int value = **ptr2; // Equivalent to: int value = *ptr1; (which is equivalent to: int value = x;)
```

In this example, 'ptr2' is a pointer to a pointer, and by dereferencing it twice (using `**ptr2`), you can access the value of 'x'.

Remember that with great power comes great responsibility. Pointers can be tricky and can lead to bugs like segmentation faults if not used correctly. In modern C++ programming, it is often recommended to use smart pointers and other higher-level abstractions to manage memory and avoid the complexities and potential issues of raw pointers.

28. Java VS c++ ?
    = Below is a comparison between Java and C++,


     - i.  C++ is platform-dependent. Java is platform-independent.
     - ii. C++ is mainly used for system programming.	Java is mainly used for application programming. It is widely used in Windows-based, web-based, enterprise, and mobile applications.
     - iii. C++ supports operator overloading.	Java doesn't support operator overloading.
     -iv. C++ supports both call by value and call by reference.	Java supports call by value only. There is no call by reference in java.

29. # What is Modular Approach Programming ?
        The modular approach, also known as modular programming, is a software development technique that emphasizes dividing a program's functionality into self-contained, independent modules or components. Each module represents a specific task or functionality, and these modules can be developed, tested, and maintained separately, making the overall software development process more manageable and organized.


    The key principles of the modular approach include:

    1. **Modularity:** The software is divided into smaller, manageable modules, where each module performs a specific function or a well-defined set of related functions. This improves code readability, reusability, and maintainability.

    2. **Encapsulation:** Each module encapsulates its internal workings, hiding the implementation details and exposing only the necessary interfaces. This way, other modules can interact with it without needing to understand its internal complexities.

    3. **Abstraction:** Modules provide a higher-level view of the functionality they offer, abstracting the underlying details. This allows developers to work with higher-level concepts rather than getting bogged down by low-level implementation details.

    4. **Reusability:** By designing modules to be independent and self-contained, they can be reused in different parts of the software or even in other projects, saving time and effort.

    5. **Maintainability:** Since modules are isolated and have well-defined interfaces, modifications or bug fixes can be limited to a specific module, making maintenance and troubleshooting more straightforward.

    6. **Scalability:** The modular approach makes it easier to add new features or expand the software by adding or modifying modules without affecting the existing functionality.

    7. **Collaborative Development:** In larger projects, different developers or teams can work on separate modules simultaneously, promoting parallel development and reducing the chances of conflicts.

    Common techniques to implement modularity include the use of functions, classes, libraries, and packages in programming languages. Modular programming is widely used in various programming paradigms, including procedural, object-oriented, and functional programming. It is a fundamental concept in software engineering and promotes the development of robust, maintainable, and extensible software systems.

30 . what is SDLC ?

= SDLC stands for Software Development Life Cycle. It is a structured approach followed by software development teams to design, create, test, and deploy high-quality software applications. The SDLC process encompasses various phases that guide the development team through the entire software development process. The primary goal of SDLC is to produce efficient, reliable, and scalable software solutions that meet the specific requirements of the end-users or clients. Different organizations may adopt different SDLC models, but the core phases generally remain the same.

Here are the typical phases in the SDLC process:

1. **Requirement Gathering and Analysis:** In this initial phase, developers work closely with stakeholders, clients, and end-users to gather all the necessary requirements for the software. The team assesses the feasibility of the project, identifies potential risks, and defines the scope of the software.

2. **Planning:** Once the requirements are gathered and analyzed, the development team creates a detailed project plan. This plan includes tasks, schedules, resource allocation, and overall project management strategies.

3. **Design:** In this phase, the system architecture is designed, and the software's technical specifications are prepared. The design may include high-level architecture, database design, user interface design, and other system specifications.

4. **Implementation (Coding):** This is the phase where the actual development of the software takes place. The programmers write the code according to the design specifications. It's essential to follow coding standards and best practices during this phase.

5. **Testing:** Once the implementation is complete, the software undergoes a series of testing to identify and fix defects or issues. Different types of testing like unit testing, integration testing, system testing, and user acceptance testing (UAT) are performed to ensure the software functions correctly.

6. **Deployment:** After the testing phase is successful, the software is deployed to the production environment, making it available to end-users.

7. **Maintenance and Support:** Once the software is in use, there might be a need for ongoing maintenance and support to fix bugs, make enhancements, and ensure it remains compatible with evolving technologies.

It's important to note that various SDLC models exist, such as Waterfall, Agile, Scrum, and DevOps, each with its specific approach to managing the development process. The choice of the SDLC model depends on the project's requirements, complexity, team size, and the organization's development philosophy.

31. Differentiate between stack and queue data structure?
    = To explain the differences between a queue and a stack in C++, let's use a table format in a .txt file to make it easier to read and understand.

**Comparison between Queue and Stack in C++**

| Aspect               |    queue                                                          |  stack
| -------------------- | ----------------------------------------------------------------- | --------------------------------------------------
| Data Structure       | Linear data structure                                             | Linear data structure     

| Ordering of Elements | First-In-First-Out (FIFO)                                         | Last-In-First-Out (LIFO)                               
| Insertion            | Elements are added at the rear                                    | Elements are added at the top            

| Deletion             | Elements are removed from the front                               | Elements are removed from the top    

| Example              | A line of people waiting in a queue                               | A stack of plates                     

| Implementation       | Can be implemented using linked lists, arrays, or deque container | Can be implemented using arrays, linked lists, or stack container
| Key Functions        | `push()` (enqueue) to add an element                              | `push()` to add an element                

|                      | `pop()` (dequeue) to remove the front element                     | `pop()` to remove the top element

|                      | `front()` to access the front element                             | `top()` to access the top element  

| Use Cases            | Task scheduling, breadth-first search algorithms, etc.            | Expression evaluation, undo/redo functionality, etc. 


   32. Application of Data Structure ?
= A data structure is a particular way of organizing data in a computer so that it can be used effectively. The real-life applications of all the data structures are discussed below. 

Application of Arrays:
     Arrays are the simplest data structures that store items of the same data type. A basic application of Arrays can be storing data in tabular format. For example, if we wish to store the contacts on our phone, then the software will simply place all our contacts in an array.
 Examples : Book titles in a Library Management Systems.
            Online ticket booking.
            Contacts on a cell phone.
            For CPU scheduling in computer.
            To store the possible moves of chess on a chessboard.
            To store images of a specific size on an android or laptop.


Application of Strings: 
      examples:
                Plagiarism detection.
                Search engine.
                Spell checkers.
                

Application of Linked Lists:
                    examples: Images are linked with each other. So, an image viewer software uses a linked list to view the previous and the next images using the previous and next buttons.
              Web pages can be accessed using the previous and the next URL links which are linked using a linked list.
              The music players also use the same technique to switch between music.
              To keep the track of turns in a multi-player game, a circular linked list is used. 
    

 Application of Stack:
                examples :
                                History of visited websites.
                Message logs and all messages you get are arranged in a stack.
                Call logs, E-mails, Google photos’ any gallery, YouTube downloads, Notifications ( latest appears first ).
                Scratch card’s earned after Google pay transaction.
                Wearing/Removing Bangles, Pile of Dinner Plates, Stacked chairs.             


Application of Queue:
                                examples :  Operating System uses queues for job scheduling.
                To handle congestion in the networking queue can be used.
                Data packets in communication are arranged in queue format.
                Sending an e-mail, it will be queued.
                Server while responding to request
                Uploading and downloading photos, first kept for uploading/downloading will be completed first (Not if there is threading)
                Most internet requests and processes use queue.
                While switching multiple applications, windows use circular queue.
                In Escalators, Printer spooler, Car washes queue.



Application of Priority Queue:
                      Process scheduling in the kernel.
                      Priority queues are used in file-downloading operations in a browser