// Write a code to count inversion
// Problem Statement
// Given an array A of size N. The task is to count the total number of inversions of the array.

// Inversions: A pair (A[i], A[j]) is said to be in inversion if:

// A[i] > A[j]
// i < j
// Examples:

// Input: A[] = [3, 2, 1]
// Output: 3
// Explanation:

// The three pairs of inversions are – (3, 2) , (3, 1), (2, 1)

// Input:  A[] = {6, 3, 5 ,2, 7}
// Output: 5
// Explanation:

// The five pairs of inversions are – (6, 3) , (6, 5), (6, 2), (3, 2), (5, 2)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
 vector<pair<int, int> >ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
             if(i<j && A[i]>A[j])
             {
                ans.push_back({A[i], A[j]});
             }
        }
    }
     for(auto elem : ans)
     {
         cout << elem.first<<","<<elem.second<<endl;
     }
}