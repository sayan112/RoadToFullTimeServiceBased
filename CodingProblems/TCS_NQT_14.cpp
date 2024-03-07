#include<bits/stdc++.h>
using namespace std;
 bool isprime(int n )
 {
if(n==0||n==1) return false;
 for(int i=2;i<=sqrt(n);i++)
 {
     if(n%i==0) return false;
 }
  return true;
 }
 int main()
 {
    int start;
     int end ;
      cin >> start>> end;
      int sum =0;
       for(int i=start+1; i<end; i++)

{
    if(isprime(i))
    {
        
sum+=i;
    }

}
 cout << sum << endl;}