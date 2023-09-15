// Input: 
// N = 7, price[] = [100 80 60 70 60 75 85]
// Nearest Greater to the left 
 // [-1,0,1,1,3,1,0]
 // (nearest great to left - i ) == output 

// consecutive smaller and before it , 
// Output:
// 1 1 1 2 1 4 6

#include<bits/stdc++.h>
using namespace std;
 vector<int> NearestGreaterToTheLeft ( vector<int>vec)
 {
    stack<pair<int,int>>st;
    vector<int>ans;
     for(int i = 0; i < vec.size(); i++)

{
      if(st.empty())
      {
 ans.push_back(-1);
      }
      else if(st.top().first>vec[i])
      {
        ans.push_back(st.top().second);
      }
      else if(st.top().first<=vec[i])
      {
        while (st.top().first <= vec[i]||st.empty())
        {
            st.pop();
             
         }
         if (st.top().first > vec[i])
         {
            ans.push_back(st.top().second);
         }
         if (st.empty())
         {
            ans.push_back(-1);
         }
      }
       st.push({vec[i],i});
}
return ans ;

 }
 int main ()
 {
     int n ;
      cin >> n ; 
       vector<int>vec;
        for(int i = 0; i < n;i++)
        {
            int need;
             cin >> need ;
              vec.push_back(need);
        }
     vector<int>ans=    NearestGreaterToTheLeft(vec);
      for(auto elem: ans)
      {
         cout << elem <<" ";
      }

 vector<int>realans;
       for (int  i = 0; i <ans.size(); i++)
       {
        realans.push_back(i-ans[i]);
       }
cout <<endl;
       for (auto elem : realans)
       {
        cout << elem << " ";
       }
 }