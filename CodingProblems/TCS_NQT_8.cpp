// Consider the following
// series: 1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187...
// This series is a mixture of 2 series - all the odd terms in this series form a geometric series and all the even terms form yet another geometric series.
// Write a program to find the Nth term in the series.The value N is a positive integer that should be read from STDIN.The Nth term that is calculated by the program should be written to STDOUT.Other than the value of the nth term, no other character / string or message should be written to STDOUT.For example, if N = 16, the 16th term in the series is 2187, so only value 2187 should be printed to STDOUT.You can assume that N will not exceed 30.

// 1 1  2^0
// 2 1  3^0
// 3 2  2^1
// 4 3  3^1
// 5 4  2^2
// 6 9  3^2

#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
 int n ;
  cin >> n ; 
   if(n==0||n==1)
   { 
     cout << 1<<endl;
      return 0;
   }

 if(n%2==0)
 {
     int digit = (n-2)/2;
    cout << pow(3,digit)<<endl;
 }
 else{
     int digit = (n - 1) / 2;
     cout << pow(2, digit) << endl;
 }
 }