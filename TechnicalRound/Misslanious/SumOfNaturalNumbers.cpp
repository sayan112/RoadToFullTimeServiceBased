// sum of Natural Numbers using Recursion
 #include<bits/stdc++.h>
 using namespace std;
 int SumOfNumbers( int n )
 {
   if(n==0)
   {
     return 0;
   }
   
   return n + SumOfNumbers(n-1);
 }
  int main()
 {
     int n;
     cin >> n;
     cout <<  SumOfNumbers(n);
     cout << (n*(n+1))/2;
  }

  