
// recursion way 

// #include <bits/stdc++.h>
// using namespace std;
// int fibo(int n )
// {
//     if (n <= 1)
//         return n;
//     return  fibo(n-1)+fibo(n-2);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout << fibo(n);
// }


// itrative manner using vector

// class Solution
// {
// public:
//     int nthFibonacci(int n)
//     {
//         // code here
//         vector<int> dp(n + 2);
//         dp[0] = 0;
//         dp[1] = 1;
//         // dp[2] = 1;
//         // int mod = 1000000007;

//         for (int i = 2; i <= n; i++)
//         {
//             dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
//         }
//         return dp[n];
//     }
// };


// DP memoisation 

// class Solution
// {
// public:
//     int fibo(int i, unordered_map<int, int> &mp)
//     {
//         if (i == 0 || i == 1)
//         {
//             return i;
//         }
//         int curIdx = i;
//         if (mp.find(curIdx) != mp.end())
//         {
//             return mp[curIdx];
//         }

//         int need = fibo(i - 1, mp) + fibo(i - 2, mp);
//         mp[curIdx] = need % 1000000007;
//         return mp[curIdx];
//     }
//     int fib(int n)
//     {
//         unordered_map<int, int> mp;
//         return fibo(n, mp);
//     }
// };