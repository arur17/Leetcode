/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    void lauda_lele(TreeNode* root, int targetSum, vector<int> &lauda){
        if (!root) return;
        lauda.push_back(root->val);
        if (!root->left && !root->right && targetSum == root->val) {
            ans.push_back(lauda);
        }
        int maggie = targetSum - root->val;
        lauda_lele(root->left, maggie, lauda);
        lauda_lele(root->right, maggie, lauda);
        lauda.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum){
        vector<int> lauda;
        lauda_lele(root, targetSum, lauda);
        return ans;
    }
};
