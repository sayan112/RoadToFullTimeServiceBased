#include<bits/stdc++.h>
using namespace std;
bool isarmstrong  (int n )
{
     int need=n;
     int result =0;
     while(n!=0)
     {
        int remainder= n%10;
        result += remainder * remainder * remainder;
        n = n / 10;
     }
     if(need==result)
     {
         return true;
     }
     else{
         return false;
     }
}
int main()
{
     int n ; 
      cin >> n ; 
       cout <<  isarmstrong(n);
}