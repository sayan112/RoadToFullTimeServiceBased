#include <bits/stdc++.h>
using namespace std;
void calcFreq(string a)
{
    unordered_map<char, int > mp;
     for (int i = 0; i <a.size(); i++)
     {
        mp[a[i]]++;
     }
      for(auto elem : mp)
     {
         cout << elem.first<<" "<<elem.second<<endl;
     }
}

int main()
{
    string a;
    cin >> a ;
     calcFreq(a);

}