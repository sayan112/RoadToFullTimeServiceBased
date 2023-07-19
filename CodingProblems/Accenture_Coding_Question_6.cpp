// You are given a function.
// int CheckPassword(char str[], int n);
// The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
// str is a valid password if it satisfies the below conditions.

// – At least 4 characters
// – At least one numeric digit
// – At Least one Capital Letter
// – Must not have space or slash (/)
// – Starting character must not be a number
// Assumption:
// Input string will not be empty.

// Example:

// Input 1:
// aA1_67
// Input 2:
// a987 abC012

// Output 1:
// 1
// Output 2:
// 0

#include <bits/stdc++.h>
using namespace std;
int CheckPassword(char str[], int size)
{
    if (size < 4)
    {
       
        return 0;
    }
    int upper = 0;
    int digit = 0;
  
    for (int i = 0; i < size; i++)
    {
        if (isupper(str[i]))
        {
            upper++;
        }
        if (isdigit(str[i]))
        {
            digit++;
        }
        if (str[i] == ' ' || str[i] == '/')
        {
            
            return 0;
        }
    }
    if (str[0] - '0' >= 0 && str[0] - '0' <= 9)
    {
       
        return 0;
    }
  
    if (upper >= 1 && digit >= 1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int size;
    cin >> size;
    char str[size];
    for (int i = 0; i < size; i++)
    {
        char c;
        cin >> c;
        str[i] = c;
    }
    cout << CheckPassword(str, size);
}