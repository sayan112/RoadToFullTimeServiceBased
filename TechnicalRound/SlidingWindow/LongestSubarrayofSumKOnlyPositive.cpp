#include <bits/stdc++.h>
using namespace std;

int longestSubarrayEqualtoK(vector<int> &vec, int k)
{
    int i = 0;
    int j = 0;
    int count = 0;
    int sum = 0;
    while (j < vec.size())
    {
     
        sum += vec[j];
        cout << sum << endl;
        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            count++;
            j++;
        }
        else
        {
            while (sum > k)
            {
               
                sum -= vec[i];
                cout << sum << endl;
                i++;
                if (sum == k && i < vec.size())
                {
                    count++;
                }
             
            }
            j++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i <n; i++)

    {
        int n;
        cin >> n;
        vec.push_back(n);
    }
    int k;
    cin >> k;
    int longestSubarray = longestSubarrayEqualtoK(vec, k);
    cout << longestSubarray << endl;
}