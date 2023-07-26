#include<bits/stdc++.h>
using namespace std;
void reverseNumber (int number)
{
   string nubertostr= to_string(number);
    int start=0;
    int end = nubertostr.size()-1;
     while(end>=start)
     {
         swap(nubertostr[end], nubertostr[start]);
          start++;
          end--;

     }
     cout << nubertostr << endl;
}
 int main()
{
    int need;
     cin>> need;
      reverseNumber(need);

 }