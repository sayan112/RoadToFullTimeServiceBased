#include <bits/stdc++.h>
using namespace std;
string isarmstrong (int n )
{
     string need= to_string(n);
      int digit=0;
      for(auto elem : need)
      {
         digit+=pow((elem-'0'),3);
      }
       if(n==digit)
       {
         return "true";
       }
       else{
         return "false";
       }

}
int main()
{
 int n ;
  cin >> n;
   cout << isarmstrong(n) << endl;
}