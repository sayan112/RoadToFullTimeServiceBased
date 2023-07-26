// A number is a perfect number if is equal to sum of its proper divisors, that is, sum of its positive divisors excluding the number itself.Write a function to check if a given number is perfect or not .

#include <bits/stdc++.h>
using namespace std;
bool PerfectNumber(int number)
{
     int sum=0;
    for (int i = 1; i * i < number; i++)
    {
        if(number%i==0)
        {
            sum+=number;
        }
    }
     if(sum==number) return true;
      return false;
    
}
int main()
{
    int need;
    cin >> need;
   cout<< PerfectNumber(need);
}