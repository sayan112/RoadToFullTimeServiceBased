// A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.

// For Example : 153
// Sum of digits = 1 + 5 + 3 = 9

// 153is divisible by 9 so 153 is a Harshad Number.

#include <bits./stdc++.h>
using namespace std;

int main()
{
    int num1;
     cin >> num1;
      int sumofdigits=0;
    int temp=num1;
     while(temp!=0)
     {
         int remainder=temp%10;
         sumofdigits += remainder;
             temp = temp / 10;
     }
 if (num1%sumofdigits==0)
 {
cout << " its a harshad number" << endl;
 }
 else{
     cout <<"its not "<<endl;
 }
    
     }
