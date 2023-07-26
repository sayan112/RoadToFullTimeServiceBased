// https://www.geeksforgeeks.org/implement-min-heap-using-stl/
#include <bits/stdc++.h>
using namespace std;
void findkthsmallest(int arr[], int k, int n)
{
    //    sort(arr,arr+n);
    //     cout << arr[k-1];
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {

        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    cout << pq.top() << endl;
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
    int k;
    cin >> k;
    findkthsmallest(arr, k, n);
}