#include <iostream>
#include <vector>
using namespace std;
int findelem(vector<int> vec, int target)
{
    int start = 0;
    int end = vec.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (vec[mid] == target)

        {
            return mid;
        }
        else if (vec[mid] < target)
        {
            end = mid - 1;
        }
        else
        {
           
            start = mid + 1;
        }
    }
    return -1;
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