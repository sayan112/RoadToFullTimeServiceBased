#include<bits/stdc++.h>
using namespace std;
vector<int> findnonrepeatingelems(vector<int>&vec )
{
    unordered_map<int,int>mp;
     for(auto elem: vec)
     {
        mp[elem]++;
     }
      vector<int>ans;
 for(auto elem: mp )
 {
 if(elem.second==1)
 {
ans.push_back(elem.first);
 }
 }
  return ans ; 
     

}

int main()
{
    int n ;
     cin >> n;
      vector<int>vec;
      for (int i = 0; i <  n ; i++)
      {
        int need;
         cin >> need;
          vec.push_back(need);
      }
       vector<int>ans= findnonrepeatingelems(vec);
      for(auto elem : ans )
      {
cout << elem <<" ";
      }
       return 0;
 }