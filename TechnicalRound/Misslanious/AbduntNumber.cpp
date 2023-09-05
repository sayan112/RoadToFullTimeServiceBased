// We will learn different ways of Abundant Number in C++

// Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.

// Ex:- Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6 

// The sum of these factors is 16 it is greater than 12 
// So it is an Abundant number

// Some other abundant numbers: 

// 18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120
#include <bits./stdc++.h>
using namespace std;

int main()
{
    int num1;
    cin >> num1;
    int sumofdigits = 0;
    int temp = num1;
    while (temp != 0)
    {
        int remainder = temp % 10;
        sumofdigits += remainder;
        temp = temp / 10;
    }
    if (num1 % sumofdigits == 0)
    {
        cout << " its a harshad number" << endl;
    }
    else
    {
        cout << "its not " << endl;
    }
}
