// Accenture Coding Question 4

// Coding Question 4
// N-base notation is a system for writing numbers which uses only n different symbols, This symbols are the first n symbols from the given notation list(Including the symbol for o) Decimal to n base notation are (0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A,11:B and so on upto 35:Z)

// Implement the following function, Char* DectoNBase(int n, int num):

// The function accept positive integer n and num Implement the function to calculate the n-base equivalent of num and return the same as a string

// Steps:

// Divide the decimal number by n,Treat the division as the integer division
// Write the the remainder (in  n-base notation)
// Divide the quotient again by n, Treat the division as integer division
// Repeat step 2 and 3 until the quotient is 0
// The n-base value is the sequence of the remainders from last to first
// Assumption:

// 1 < n < = 36

// Example

// Input

// n: 12

// num: 718

// Output

// 4BA

// Explanation

// num       Divisor       quotient       remainder

// 718           12               59                 10(A)

// 59             12                4                   11(B)

// 4               12                0                   4(4)

// Sample Input

// n: 21

// num: 5678

// Sample Output

// CI8

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums;
    cin >> nums;
    string need;
    unordered_map<char, int> mp;
    for (int i = 10; i <= 35; i++)
    {
        mp[i] = 'A' + (i - 10);
    }
    while (nums != 0)
    {
        int rem = nums % n;
        nums = nums / n;
        if (rem < 10)
        {
            need += to_string(rem);
        }
        else
        {
            need += mp[rem];
        }
    }
    reverse(need.begin(), need.end());
            cout << need;
}
