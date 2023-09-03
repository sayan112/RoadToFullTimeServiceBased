// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

 

// Example 1:

// Input: candidates = [10,1,2,7,6,1,5], target = 8
// Output: 
// [
// [1,1,6],
// [1,2,5],
// [1,7],
// [2,6]
// ]
// Example 2:

// Input: candidates = [2,5,2,1,2], target = 5
// Output: 
// [
// [1,2,2],
// [5]
// ]
 

// Constraints:

// 1 <= candidates.length <= 100
// 1 <= candidates[i] <= 50
// 1 <= target <= 30

class Solution
{
public:
    void generateCombinationSum2(vector<int> &candidates, int target, int idx, set<vector<int>> &ans, vector<int> &ds)
    {

        if (idx == candidates.size())
        {

            if (target == 0)
            {
                vector<int> check = ds;

                sort(check.begin(), check.end());
                ans.insert(check);
            }
            return;
        }
        if (target >= candidates[idx])
        {
            ds.push_back(candidates[idx]);
            target -= candidates[idx];
            generateCombinationSum2(candidates, target, idx + 1, ans, ds);
            target += candidates[idx];
            ds.pop_back();
        }
        generateCombinationSum2(candidates, target, idx + 1, ans, ds);
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {

        set<vector<int>> ans;
        int idx = 0;
        vector<int> ds;

        generateCombinationSum2(candidates, target, idx, ans, ds);
        vector<vector<int>> ans2;
        for (auto elem : ans)
        {
            ans2.push_back(elem);
        }
        return ans2;
    }
};