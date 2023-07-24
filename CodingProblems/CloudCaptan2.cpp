// Enter the number to check Magic number:

// 1234
// 1234 is a Magic number
// Or
// Enter the number to check Magic number:

// 53
// 53 is not an Magic number
// A number is said to be Magic if and only if the recursive sum of its digits is equal to 1.
#include <bits/stdc++.h>
using namespace std;

 int sumofdigits(int n )
 {
     int sum =0;
     while(n>0)
     {
        sum+=n%10;
         n = n / 10;
     
     }
      return sum;
    
 }
int32_t main(){
   
   int n ; 
    cin >> n ; 
      int sum =  sumofdigits (n);
      int sum2 = sumofdigits (sum);
      if(sum2==1)
      {
         cout << "true"<<endl;
      }
      else{
        cout << "false"<<endl;
      }
      return 0;
}

