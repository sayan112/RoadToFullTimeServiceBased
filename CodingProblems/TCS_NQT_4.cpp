// Find the smallest number in an array
//     Find the largest number in an array
//         Second Smallest and Second Largest element in an array

#include <bits/stdc++.h>
using namespace std;
int findmallestNumber(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

int BiggestNumber(int arr[], int n)
{
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int SecondLargest(int arr[], int n)
{

    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < largest && second != largest)
        {
            second = arr[i];
        }
    }
    return second;
}

vector<int> Reverse(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr[i]);
    }
    int start = 0;
    int end = n - 1;
    while (end >= start)
    {
        swap(ans[start], ans[end]);
        start++;
        end--;
    }
    return ans;
}

void countTheFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto elem : mp)
    {
        cout << elem.first << " " << elem.second << endl;
    }
}
 int sumofArr ( int arr[] , int n )
 {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
     return sum;
 }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Find the smallest number in an array
    cout << findmallestNumber(arr, n) << " ";
    // Find the largest number in an array
    cout << BiggestNumber(arr, n) << " ";
    //   Second Smallest and Second Largest element in an array
    cout
        << SecondLargest(arr, n) << " ";
    // Reverse a given array
    vector<int> ans = Reverse(arr, n);
    cout << endl;
    for (auto elem : ans)
    {
        cout << elem << " ";
    }
    cout << endl;
    // Count frequency of each element in an array
    countTheFreq(arr, n);

    //  Rearrange array in increasing - decreasing order
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Calculate sum of the elements of the array
   cout <<  sumofArr(arr,n)<<endl;
}