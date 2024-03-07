// C  to check whether a given number is a prime number or not .The given number N, a positive integer, will be passed to the program using the first command line parameter.If it is a prime number the output should be the square root of the number up to 2 decimal point precision, If it is not a prime number then print 0.00 to stdout
#include <bits/stdc++.h>
using namespace std;
bool isaPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    bool check = isaPrime(n);
     if(check)
     {
         cout << setprecision(3) << sqrt(n) << endl;
     }
     else{
         cout << 0.00<<endl;
     }
  
}