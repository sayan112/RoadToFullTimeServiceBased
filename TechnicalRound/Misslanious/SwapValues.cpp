// #include<iostream>
// using namespace std;
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x = 5, y = 10;
//     int *ptr1 = &x; // ptr1 points to x
//     int *ptr2 = &y; // ptr2 points to y

//     swap(ptr1, ptr2); // Swap values through pointers

//     std::cout << x << " " << y; // Output: 10 5

//     return 0;
// }

#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5;
    int y = 10;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    swap(x, y);

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}
