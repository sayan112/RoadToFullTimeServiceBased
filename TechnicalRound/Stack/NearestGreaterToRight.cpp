#include<bits./stdc++.h>
 using namespace std ;
 vector<long long> nextLargerElement(vector<long long> arr, int n)
 {
     // Your code here
     // Nearest Greater to Right..

     stack<long long> st;

     vector<long long> ans;
     for (int i = arr.size() - 1; i >= 0; i--)
     {
         if (st.size() == 0)
         {
             ans.push_back(-1);
         }
         else if (st.top() > arr[i])
         {
             ans.push_back(st.top());
         }
         else if (st.top() <= arr[i])
         {
             while (st.size() != 0 && st.top() <= arr[i])
             {
                 st.pop();
             }
             if (st.size() == 0)
             {
                 ans.push_back(-1);
             }
             else if (st.top() > arr[i])
             {
                 ans.push_back(st.top());
             }
         }
         st.push(arr[i]);
     }
     reverse(ans.begin(), ans.end());
     return ans;
 }

  int main ()
  {
     int n ; 
      cin >> n;
     vector<long long >vec;
      for (int i = 0; i <  n ; i++)
      {
         long long  need ; 
          cin >> need;
         vec.push_back(need);
        /* code */
      }
      
    nextLargerElement(vec,n );
  }