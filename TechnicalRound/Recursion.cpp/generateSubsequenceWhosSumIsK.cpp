//Generate all subsequece whos sum is k 

// #include<bits./stdc++.h>
// using namespace std;

// void numSubseqngenerate(vector<int> &nums, int idx, int target, vector<vector<int>> &ans, vector<int> &subans)
// {

//     if (nums.size() == idx)
//     {
//         if (target == 0)
//         {
//             ans.push_back(subans);
//         }
//         //  cout << target<<" target"<< " ";
//         //  for(auto elem : subans)
//         //  {
//         //      cout << elem <<" ";
//         //  }
//         //   cout <<endl;
//         return;
//     }

//     subans.push_back(nums[idx]);
//     target -= nums[idx];
//     numSubseqngenerate(nums, idx + 1, target, ans, subans);
//     target += nums[idx];
//     subans.pop_back();
//     numSubseqngenerate(nums, idx + 1, target, ans, subans);
// }
// int numSubseq(vector<int> &nums, int target)
// {

//     int idx = 0;
//     vector<vector<int>> ans;
//     vector<int> subans;
//     numSubseqngenerate(nums, idx, target, ans, subans);
//      for(auto elem : ans)
//      {
//          for(auto elem2: elem)
//          {
//              cout << elem2 <<" ";
//          }
//           cout <<endl;
//      }
//     return ans.size();
// }

// int main()
// {
//      vector<int>nums;
//       int n ; 
//        cin >> n ; 
//       for(int i =0;i<n;i++)
//       {
//          int need ;
//           cin >> need ;
//            nums.push_back(need);

//       }
//        int target ;
//        cin >> target ;
//     cout <<  numSubseq(nums, target);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void generatesubsets(vector<int> &arr, int &sum, int idx, int &anscount, int k)
// {

//     if (arr.size() == idx)
//     {
//         if (sum == k)
//         {
//             anscount++;
//         }
//         return;
//     }
//     sum += arr[idx];
//     generatesubsets(arr, sum, idx + 1, anscount, k);
//     sum -= arr[idx];
//     generatesubsets(arr, sum, idx + 1, anscount, k);
// }

// int findWays(vector<int> &arr, int k)
// {
//     int sum = 0;
//     int idx = 0;
//     int anscount = 0;
//     generatesubsets(arr, sum, idx, anscount, k);
//  return  anscount;
// }

//  int main ()
//  {
//     int n ;
//      cin >> n ;
//       vector<int>arr;
//        for(int i = 0; i < n;i++)
//        {
//         int need;
//          cin >> need ;
//          arr.push_back(need);
//        }
//        int k ;
//         cin >> k ;
//        cout << findWays(arr,k);
//  }



#include<bits/stdc++.h>
using namespace std;

bool checkSubsetSumToK(vector<int> arr , i)
{

}
 int main()
{
    int n ;
     cin >> n ;
      vector<int>arr;
       for(int i = 0; i < n;i++)
       {
        int need;
         cin >> need ;
         arr.push_back(need);
       }
       int k ;
        cin >> k ;
        cout << checkSubsetSumToK(arr, k);
 }