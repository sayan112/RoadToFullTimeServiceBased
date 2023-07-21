// Find all Symmetric Pairs in the array of pairs
// In this article, we will solve the problem: “Find all Symmetric Pairs in the array of pairs”

// Problem Statement: Given an array of pairs, find all the symmetric pairs in the array.

// Examples:

// Example 1:
// Input: (1,2),(2,1),(3,4),(4,5),(5,4)
// Output: (2,1) (5,4)
// Explanation: Since (1,2) and (2,1) are symmetric pairs and (4,5) and (5,4) are symmetric pairs.

// Example 2:
// Input: (1,5),(2,3),(4,2),(5,1),(2,4)
// Output: (2,4) (5,1)
// Explanation: Since (1,5) and (2,4) are symmetric pairs and (5,1) and (4,2) are symmetric pairs.
 
  #include<bits/stdc++.h>
  using namespace std;
  vector<pair<int, int>> SymmetricPair(vector<pair<int, int>>&vec)
  {

      vector<pair<int, int>>ans;
          set<pair<int, int>> st;
      for (auto elem : vec)
      {
          int minelem = min(elem.first, elem.second);
          int maxielem = max(elem.second, elem.first);
          st.insert({minelem, maxielem});
        }
       
        for(auto elem : st) {
             ans.push_back(elem);
        }

        return ans;

  }
   int main()
  {
      vector<pair<int,int>>vec;
       int n;
        cin>> n;
       for (int i = 0; i <n; i++)
       {
        int a , b ; 
         cin>>a >>b;
          vec.push_back({a,b});
       }
       vector<pair<int, int>>ans= SymmetricPair(vec);
        for(auto elem : ans)
        {
             cout << elem.first << " " << elem.second << endl;
        }
   }