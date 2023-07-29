#include<bits/stdc++.h>
using namespace std;
void print1_to_n (int n )
{
 if(n==0)
 {
     return ;
 }

 print1_to_n(n-1);
  cout << n<<endl;
}


 int main()
{
    int n ;
     cin >> n;
      print1_to_n(n);
 }