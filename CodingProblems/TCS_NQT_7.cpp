// Maximum Product Subarray in an Array
// Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.

// Example 1:
// Input:
//  Nums = [1,2,3,4,5,0]
// Output:
//  120
// Explanation:
//  In the given array, we can see 1×2×3×4×5 gives maximum product value.

// Example 2:
// Input:
//  Nums = [1,2,-3,0,-4,-5]
// Output:
//  20
// Explanation:
//  In the given array, we can see (-4)×(-5) gives maximum product value.

#include <bits/stdc++.h>
using namespace std;
int maxiProduct(vector<int> &vec)
{

  // this solution works with 0 and positive numbers only
  //     sort(vec.begin(), vec.end(),greater<int>());

  //  int multiplication=vec[0];
  //   int maxi=INT_MIN;
  //      for (int i = 1; i < vec.size(); i++)
  //      {
  //       multiplication*=vec[i];
  //        maxi=max(maxi,multiplication);
  //      }
  //       return maxi;

  int prefix = 1;
  int suffix = 1;
  int ans = INT_MIN;
  int n = vec.size();
  for (int i = 0; i < n; i++)
  {
    if (prefix == 0)
    {
      prefix = 1;
    }
    if (suffix == 0)
    {
      suffix = 1;
    }
    prefix *= vec[i];
    suffix *= vec[n - i - 1];

    ans = max(ans, max(prefix, suffix));
  }

  return ans;
}
int main()
{
  int n;
  cin >> n;
  vector<int> vec;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    vec.push_back(a);
  }

  cout << maxiProduct(vec);
}