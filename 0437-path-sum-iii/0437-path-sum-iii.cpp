class Solution {
public:
    void dfs(TreeNode* node, long long sum, int& ans) {
        if (node == NULL) {
            return;
        }
        if (node->val == sum) {
            ans++;
        }
        dfs(node->left, sum - node->val, ans);
        dfs(node->right, sum - node->val, ans);
    }
    
    void traverse(TreeNode* root, int targetSum, int& ans) {
        if (root == NULL) {
            return;
        }
        dfs(root, targetSum, ans);
        traverse(root->left, targetSum, ans);
        traverse(root->right, targetSum, ans);
    }

    int pathSum(TreeNode* root, int targetSum) {
        int ans = 0;
        traverse(root, targetSum, ans);
        return ans;
    }
};
