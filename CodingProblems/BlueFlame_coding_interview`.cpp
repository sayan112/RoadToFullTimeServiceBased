#include <bits/stdc++.h>
using namespace std;

vector<int> divisibleby4(int (&arr)[5])
{
    vector<int> ans;

// return multiple of 4s
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] % 4 == 0)
        {
            ans.push_back(arr[i]);
        }
    }

    return ans;
}
int main()
{

    int arr[5] = {1, 8, 16, 4, 5};
    cout << sizeof(arr) / sizeof(arr[0]);

    vector<int> ans = divisibleby4(arr);
    for (auto elem : ans)
    {
        cout << elem << " ";
    }
}