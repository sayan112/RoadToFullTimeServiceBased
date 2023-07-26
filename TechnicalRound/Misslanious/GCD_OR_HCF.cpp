
#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    } // Base cases.

    else if (a == b)
    {
        return a;
    }

    else if (a > b)
    {
        return GCD(a - b, b);
    }
  return GCD(a, b - a);
    

    
}
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << GCD(a, b);
}