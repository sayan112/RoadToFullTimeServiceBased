#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    for (auto elem : s)
    {
        if (isdigit(elem))
        {
            sum += elem - '0';
        }
    }
    cout << sum << endl;
}