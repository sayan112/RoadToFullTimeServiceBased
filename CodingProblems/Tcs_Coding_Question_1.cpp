#include <bits./stdc++.h>
using namespace std;
int main()
{
    string need;
    cin >> need;
    unordered_map<char, int> mp;
    for (auto elem : need)
    {
        mp[elem]++;
    }
    string ans;
    for (auto elem : need)
    {
        if (mp.find(elem) != mp.end())
        {
            ans += mp[elem] + '0';
            ans += elem;
            mp.erase(elem);
        }
    }
    cout << ans;
}