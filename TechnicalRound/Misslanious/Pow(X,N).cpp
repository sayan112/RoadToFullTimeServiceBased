#include<bits/stdc++.h>
using namespace std;
double Pow(double x , int n )
{ 
     if(n==1)
     {
        return x;
     }

   return x * Pow(x,n-1);
}
 int main()
{
    double x;
     cin >> x;
      int n ;
      cin>>n;
       if(n<0)
       {
        n=abs(n);

        cout <<  1/   Pow(x, n);
         return 1;
       }
       
     cout <<   Pow(x,n);
       
 }