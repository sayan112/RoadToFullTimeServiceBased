#include <bits/stdc++.h>
using namespace std;
int factCount(int n)
{
    
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return  n * factCount(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;

    cout << factCount(n);
}