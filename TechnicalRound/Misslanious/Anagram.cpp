#include <bits/stdc++.h>
using namespace std;
bool anamgramStrings(string a, string b)
{
    //     Time Complexity: O(N * logN), For sorting.
    // Auxiliary Space: O(1) as it is using constant extra space
    if (a.size() != b.size())
        return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}
bool anamgramStringsUsingMap(string a, string b)
{
    if (a.size() != b.size())
        return false;
    unordered_map<char, int> mp;
    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (mp.find(b[i]) != mp.end())
        {
            mp[b[i]]--;
            if (mp[b[i]] == 0)
            {
                mp.erase(b[i]);
            }
        }
        else
        {
            return false;
        }
    }
    if (mp.size() == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    string a;
    string b;
    cin >> a >> b;
    cout << anamgramStrings(a, b);
    cout << anamgramStringsUsingMap(a, b);
}