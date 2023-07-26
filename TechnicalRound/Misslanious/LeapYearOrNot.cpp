#include <bits/stdc++.h>
using namespace std;
bool LeapYear(int a)
{
  if(a%4==0)
  {
     if(a%100==0)
     {
        if(a%400==0)
     {
         return true;

     }
     else{
         return false;
     }
     }
     else{
         return true;
     }

  }
  else{
     return false;
  }
}

int main()
{
    int a;
    cin >> a;
    LeapYear(a);
}