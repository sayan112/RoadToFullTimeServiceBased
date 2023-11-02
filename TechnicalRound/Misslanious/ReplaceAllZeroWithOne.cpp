// Program to Replace all 0’s with 1 in a given integer
// Here we will discuss how to replace all the 0’s with 1 in a given integer using C++ programming language.

// The concept is simple, find the digits of the integer. Compare each digit with 0 if the digit is equal to 0 then replace it with 1. Construct the new integer with the replaced digits.

#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
     int need ;
      cin >> need;
     string s= to_string(need);
     for(auto &elem : s )
     {
        if(elem=='0')
        {
            elem='1';
        }
     }
      cout << stoi(s);

 }