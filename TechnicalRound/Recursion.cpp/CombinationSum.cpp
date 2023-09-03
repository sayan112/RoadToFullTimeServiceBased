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


class Solution {
public:
     void generateAllCombination (vector<int>& candidates , int idx , int target ,     vector<int>ds , vector<vector<int>>&ans  )
     {
         if(idx==candidates.size())
         {
             if(target==0)
             {
                 ans.push_back(ds);
             }
              return ;
         }
          if(target>=candidates[idx])
          {
                 ds.push_back(candidates[idx]);
         target-=candidates[idx];
         generateAllCombination(candidates,idx,target,ds,ans);
         ds.pop_back();
          target+=candidates[idx];
          }
      
         generateAllCombination(candidates,idx+1,target,ds,ans);
         
         
     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
         int idx =0;
           vector<vector<int>>ans;
        generateAllCombination(candidates,idx,target,ds,ans);
         return ans ;
    }
};