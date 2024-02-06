#include <bits/stdc++.h>
using namespace std;

 bool checkItsPrimeOrnot ( int n )
 {
    // starts with 2 , bcz 0 not divided with anyone and 1 is is divideng every variable
     for(int i=2;i<n;i++)
     {
         if(n%i==0)
         {
             return false;
         }
     }
      return true;

 }

 bool checkItsPrimeOrnotOptimised(int n )
 {
    if (n<2 || n%2==0)
    { 
         return false; 

    }
     else if(n==2)
     {
         return true;
     }
      else {
         for (int i = 3; i < sqrt(n); i+=2)
         {
             if(n%i==0)
             {
                 return false;
             }
         }
         
      }
       return true;
    
 }

     int32_t
     main()
 {

    int n ;
     cin>> n ; 
     if(checkItsPrimeOrnot(n))
     {
         cout << "True" << endl;
     }
     else{
    
        cout << "False" << endl;
     }

     if (checkItsPrimeOrnotOptimised(n))
     {
        cout << "True" << endl;
      
     }
     else
     {
        cout << "False" << endl;
     }
 }
