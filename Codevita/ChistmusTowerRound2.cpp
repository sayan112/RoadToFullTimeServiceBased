#include <bits/stdc++.h>
using namespace std;
bool customCmp(const std::pair<int, int> &blockCount1, const std::pair<int, int> &blockCount2)
{
    if (blockCount1.second != blockCount2.second)
    {
        return blockCount1.second > blockCount2.second;
    }
    else
    {
        return blockCount1.first < blockCount2.first;
    }
}
int main()
{
    int hightneed;
    cin >> hightneed;

    vector<int> blocks;
    for (int i = 1; i <= 5; i++)
    {
        int block;
        cin >> block;
        blocks.push_back(block);
    }

    sort(blocks.begin(), blocks.end(), greater<int>());

    vector<int> dp(10001, -1);
    dp[0] = 0;

    for (int currentSum = 1; currentSum <= hightneed; currentSum++)
    {
        for (int block : blocks)
        {
            if (dp[currentSum - block] != -1 && currentSum - block >= 0)
            {
                int need = dp[currentSum - block] + 1;
                dp[currentSum] = max(dp[currentSum], need);
            }
        }
    }

    if (dp[hightneed] == -1)
    {
        cout << "Impossible";
        return 0;
    }

    map<int, int> selectedblocks;
    while (hightneed > 0)
    {
        for (int block : blocks)
        {
            if (dp[hightneed] == dp[hightneed - block] + 1 && hightneed - block >= 0)
            {

                hightneed -= block;
                selectedblocks[block]++;
                break;
            }
        }
    }

    vector<pair<int, int>> sortedBlocks(selectedblocks.begin(), selectedblocks.end());
    sort(sortedBlocks.begin(), sortedBlocks.end(), customCmp);

    for (int itr = 0; itr < sortedBlocks.size(); itr++)
    {
        cout << sortedBlocks[itr].first;
        if (itr < sortedBlocks.size() - 1)
        {
            cout << " ";
        }
    }

    return 0;
}
