#include <bits/stdc++.h>
using namespace std;
int main()
{
     char c;
     cin >> c;
     unordered_map<char, int> mp;
     mp['a']++;
     mp['e']++;
     mp['i']++;
     mp['o']++;
     mp['u']++;
     if (mp.find(c) != mp.end())
     {
          cout << "its a vowel" << endl;
     }
     else
     {
          cout << "its a consonant" << endl;
     }
}