#include <bits/stdc++.h>
using namespace std;
int minimumIdx(vector<int> &nums)
{
    int size = nums.size();
    if (nums[0] <= nums[size - 1])
    {
        return 0;
    }

    int start = 0;
    int end = size - 1;

    while (end >= start)
    {
        int mid = (end + start) / 2;
        int prev = (mid + nums.size() - 1) % size;
        int next = (mid + 1) % size;
        if ((nums[mid] < nums[prev]) && (nums[mid] < nums[next]))
        {
            //  cout << nums[mid]<<" "<< nums[prev]<<" "<< nums[next]<<endl;
            //  cout << mid << endl;
            return mid;
        }
        else if (nums[mid] > nums[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}
bool binearySearch(vector<int> &vec, int start, int end, int target)
{
    while (end >= start)
    {
        int mid = (start + end) / 2;
        if (vec[mid] == target)

        {
            return true;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
     return false;
}

int FindelemInSortedArray(vector<int> &vec)
{
    int mini = minimumIdx(vec);
    return mini;
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int need;
        cin >> need;
        vec.push_back(need);
    }
    int findelem;
    cin >> findelem;
    int mini = FindelemInSortedArray(vec);
   bool check1=  binearySearch(vec, 0, mini - 1, findelem);
    bool check2= binearySearch(vec, mini, vec.size() - 1, findelem);
     cout <<  (check1|| check2);
}