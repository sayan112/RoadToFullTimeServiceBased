/*
#include<bits./stdc++.h>
using namespace std;
  vector<int> NearestSmallerElem (vector<int>vec)
  {
     vector<int>ans;
     for(int i=0; i<vec.size(); i++)
     {
        bool mark = false;
         for (int j = i+1; j < vec.size(); j++)
         {
             if(vec[i]>vec[j])
             {
                mark=true;
                 ans.push_back(vec[j]);
                 break;
             }
         }
          if(!mark)
          {
  ans.push_back(-1);
          }
     }
      return ans;


  }
 int main ()
 {
     int n ;
      cin >> n ;
       vector<int>vec;
    for(int i =0;i<n;i++)
    {
       int need;
        cin>> need ;
         vec.push_back(need);

    }
  vector<int>ans =NearestSmallerElem(vec);
  for(auto elem : ans)
  {
     cout << elem<<" ";
  }

 }

 */

#include <bits./stdc++.h>
using namespace std;
vector<int> NearestSmallerElem(vector<int> vec)
{
    vector<int> ans;
   stack<int>st;
      for (int i = vec.size()-1; i>=0 ; i--)
      {
       if(st.size() == 0)
       {
        ans.push_back(-1);
       }
       else if(vec[i]>st.top())
       {
ans.push_back(st.top());
       }
       else{
        while(st.size() > 0 && vec[i]< st.top())
        {
            st.pop();
        }
        if (st.size() == 0)
        {
            ans.push_back(-1);
        }
        else{
            ans.push_back(st.top());
        }
       }
     st.push(vec[i]);
      }
      return ans ;
      
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int need;
        cin >> need;
        vec.push_back(need);
    }
    vector<int> ans = NearestSmallerElem(vec);
    for (auto elem : ans)
    {
        cout << elem << " ";
    }
}
