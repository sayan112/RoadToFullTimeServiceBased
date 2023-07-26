#include <bits/stdc++.h>
using namespace std;
bool palindrome(string a, string b)
{
     if(a.size()!=b.size()) return false;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[a.size()-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a;
    string b;
    cin >> a >> b;
    cout << palindrome(a, b);
}