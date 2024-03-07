#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int n ;
     cin>>n;
      string need;
    while(n>1)
    {
        need+=n%2+'0';
      n = n/2;
    }
    need+=n+'0';
     reverse(need.begin(), need.end());
     cout << stoi(need) << endl;                
 }