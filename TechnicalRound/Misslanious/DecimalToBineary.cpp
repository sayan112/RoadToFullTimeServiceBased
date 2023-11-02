#include <bits/stdc++.h>
using namespace std;
// 4
int main()
{
   int Decimal;
   cin>> Decimal;
    string need;
    while (Decimal!=0)
    {
         int remainder = Decimal%2;
   need.push_back(remainder+'0');
         Decimal = Decimal/2;
    }

 cout << need;
    
}