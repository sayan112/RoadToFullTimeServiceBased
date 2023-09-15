#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
     int n = 890190798;
     int target = 9;
      int ans =0;
      while(n)
      {
        int remainder=n%10;
         n=n/10;
         if(remainder==target)
         {
ans++;
         }
      }
       cout << ans <<endl;
 }