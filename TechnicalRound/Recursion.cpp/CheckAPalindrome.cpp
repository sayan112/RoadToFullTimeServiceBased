#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int arr[], int start, int end, int n)
{

     if(start>=end)
     {
         return true;
     }
        if (arr[start]!=arr[end])
        {
            return false;
        }


        return   ispalindrome(arr, start + 1, end - 1, n);
    
}

int32_t main()
{

    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    // reverse(arr,arr+n);
  cout <<  ispalindrome(arr, start, end, n);

  // time complexity-> o(n/2)
   // space complexity-> o(n/2)
}
