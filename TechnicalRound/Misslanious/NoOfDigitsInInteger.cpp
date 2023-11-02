#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
    long long int need;
     cin >> need;
      int count =0;
     while(need)
     {
     need=need/10;
     count++;
     }
      cout<<  count ;

 }