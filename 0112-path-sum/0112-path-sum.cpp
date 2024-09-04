class Solution {
public:
    bool add(TreeNode* node, int targetSum) {
        if (node == NULL) {
            return false;
        }
        if (node->left == NULL && node->right == NULL) {
            return targetSum == node->val;
        }
        return add(node->left, targetSum - node->val) || add(node->right, targetSum - node->val);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return false;
        }
        return add(root, targetSum);
    }
};
