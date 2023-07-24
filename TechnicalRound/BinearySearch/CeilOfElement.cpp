// Ceil of 5 it means samllest  elem which is greater than 5

#include <iostream>
using namespace std;
int findCeil(int arr[], int n, int target)
{

    int idx = -1;
    int start = 0;
    int end = n - 1;

    while (end >= start)
    {
        int mid = (start + end) * 0.5;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
           
            start = mid + 1;
        }
        else
        {
            idx = mid;
            end = mid - 1;
        }
    }
    return idx;
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    cout << findCeil(arr, n, target);
}