#include<bits/stdc++.h> 
using namespace std;
  int main ()
  {
     int a , b;
      cin>> a;
       cin>> b;
   int gcdofaansb= __gcd(a,b);
   cout <<"HCF of a and b is "<< gcdofaansb<<endl;
   int LCM= (a*b)/gcdofaansb;
   cout << "LCM of a and b is "<< LCM << endl;
  }