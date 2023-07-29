// #include <bits/stdc++.h>
// using namespace std;
// void sumofarray(int arr[], int i, int &sum, int n)
// {

//     if (i == n)
//     {
//         return;
//     }

//     sum += arr[i];
//     sumofarray(arr, i + 1, sum, n);
// }
// int32_t
// main()
// {

//     int n;
//     cin >> n;
//     int arr[n + 1];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int i = 0;
//     int sum = 0;
//     // by parameterised way 
//     sumofarray(arr, i, sum, n);
// cout << sum << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int  sumofarray(int arr[], int i,  int n)
{

    if (i == n-1)
    {
        return arr[i];
    }

   return arr[i]+ sumofarray(arr, i + 1, n);
}
int32_t
main()
{

    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
  
  int sum=   sumofarray(arr, i, n);
    cout << sum << endl;
    return 0;
}


// tc -> o(n) // because n time calls 
// sc -> o(n) // because n funcation calls in the auxilarry  stack space 

