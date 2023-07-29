/*
Problem Description:
Given an array of integers, your task is to replace each element with its rank in the array. The rank of an element is its position in the array when the array is sorted in non-decreasing order. The smallest element in the array will have a rank of 1, the second smallest will have a rank of 2, and so on.

Test Cases:
1. Input: [10, 8, 15, 12, 6]
   Output: [3, 2, 5, 4, 1]
   Explanation: The sorted array would be [6, 8, 10, 12, 15]. The ranks of the elements in the original array are [3, 2, 5, 4, 1].

2. Input: [5, 5, 5, 5, 5]
   Output: [1, 1, 1, 1, 1]
   Explanation: Since all elements are the same, their ranks will also be the same, i.e., 1.

3. Input: [20, 10, 5, 30, 40]
   Output: [3, 2, 1, 4, 5]
   Explanation: The sorted array would be [5, 10, 20, 30, 40]. The ranks of the elements in the original array are [3, 2, 1, 4, 5].

4. Input: [1, 2, 3, 4, 5]
   Output: [1, 2, 3, 4, 5]
   Explanation: Since the array is already sorted in non-decreasing order, the ranks will be the same as the original elements.

5. Input: [100, 50, 25, 75]
   Output: [4, 2, 1, 3]
   Explanation: The sorted array would be [25, 50, 75, 100]. The ranks of the elements in the original array are [4, 2, 1, 3].

Remember that this is just the problem description and test cases. If you want the actual code implementation, feel free to ask!

*/

#include <bits/stdc++.h>
using namespace std;
void rankofarray(int need[], int n)
{
    unordered_map<int, int> mp;
    vector<int> cpyarr(need, need + n);
    
    sort(cpyarr.begin(), cpyarr.end());
     for(int i=0; i<n ; i++)
     {
         if(mp.find(cpyarr[i])==mp.end())
        {
   
            mp[cpyarr[i]] = i + 1;
        }
     
     }
     for(int i=0; i<n ; i++)
     {
          cout << mp[need[i]]<<endl;
     }
}
int main()
{
    int n;
    cin >> n;
    int need[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> need[i];
    }

    rankofarray(need, n);
}