#include<bits/stdc++.h>
using namespace std;
 int main ( )
 {
    string s1;
     string s2;
      cin >> s1 >> s2;
    //   Given two strings s1 and s2 consisting of lowercase English alphabets, the task is to count all the pairs of indices(i, j) from the given strings such that s1[i] = s2[j] and all the indices are distinct i.e.if s1[i] pairs with some s2[j] then these two characters will not be paired with any other character.
     int count =0;
 unordered_map<char,int>mp;
  for(auto elem:s1)
  {
    mp[elem]++;
  }
 
   for(auto elem :s2)
   {
     if(mp.find(elem)!=mp.end())
     {
         count++;
         mp[elem]--;
         if(mp[elem]==0)
         {
            mp.erase(elem);
         }
     }
 
   }
cout <<  count;

    
 }