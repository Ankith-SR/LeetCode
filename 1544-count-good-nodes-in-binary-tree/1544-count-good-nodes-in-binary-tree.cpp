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
    void solve(TreeNode* node, int curr, int &ans){
        if(node == NULL){
            return;
        }
        if(node->val >= curr){
            ans++;
            curr = node->val;
        }
        solve(node->right, curr, ans);
        solve(node->left, curr, ans);
    }
    int goodNodes(TreeNode* root) {
        int ans = 0;
        solve(root, root->val, ans);
        return ans;
    }
};