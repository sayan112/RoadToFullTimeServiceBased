#include <iostream>
#include <vector>

using namespace std;

//   Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void preorder(TreeNode *root, vector<int> &ans)
    {
        if (!root)
        {
            return;
        }
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};

int main()
{
    // Create your binary tree and call the function
    // Example usage:
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    Solution sol;
    vector<int> result = sol.preorderTraversal(root);
    for (int num : result)
    {
        cout << num << " ";
    }
    // Don't forget to free memory by deleting tree nodes.

    return 0;
}


// tc -> o(n)
//sc-> o(n) when the tree is screw tree