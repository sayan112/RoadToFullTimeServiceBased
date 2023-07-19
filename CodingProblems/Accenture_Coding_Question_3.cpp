// Accenture Coding Question 3

// Coding Question 3
// Implement the following Function

// The function def ProductSmallestPair(sum, arr) accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair

// NOTE

// Return -1 if array is empty or if n<2
// Return 0, if no such pairs found
// All computed values lie within integer range
// Example

// Input

// sum:9

// Arr:5 2 4 3 9 7 1

// Output

// 2

// Explanation

// Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2

// Sample Input

// sum:4

// Arr:9 8 3 -7 3 9

// Sample Output

// -21



#include<iostream>
#include<vector>
using namespace std;

int ProductSmallestPair(int sum, vector<int>&arr)
{
int mini=INT32_MAX;
 int ans =0;
 for(int i = 0; i < arr.size(); i++)
 {
     for (int j = i+1; j < arr.size(); j++)
     {
         if((arr[i]+arr[j])<sum && (arr[i]+arr[j])<mini)
         {
 mini=min(mini,(arr[i]+arr[j]));
ans=arr[i]*arr[j];
         }
     }
 }
  return ans;
}
int main()
{
     int sum ;
      cin >> sum;
      vector<int>arr;
       int size = 6;
        for(int i=0; i<size; i++)
        {
            int need;
             cin >> need;
              arr.push_back(need);
        }
   cout <<  ProductSmallestPair(sum,arr);
 }