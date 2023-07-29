#include <bits/stdc++.h>
using namespace std;
void reversearr(int arr[], int start, int end, int n)
{

    {
        if (start >= end)
        {
            return;
        }

        swap(arr[start], arr[end]);

        reversearr(arr, start + 1, end - 1, n);
    }
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
        reversearr(arr, start, end, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
