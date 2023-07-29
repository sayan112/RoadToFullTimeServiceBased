#include <iostream>
#include <vector>
using namespace std;
int findelem(vector<int> vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;
    int lastOccurence = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (vec[mid] == target)

        {
            lastOccurence = mid;
            start = mid + 1;
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
    return lastOccurence;
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

    int target;
    cin >> target;
    int ansidx = findelem(vec, target);
    cout << ansidx << endl;
}