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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;
        dfs(root1, leaf1);
        dfs(root2, leaf2);

        return leaf1 == leaf2;  
    }

    void dfs(TreeNode* node, vector<int>& leaf){
        if(node == NULL){
            return;
        }
        if(node->left == NULL && node->right == NULL){
            leaf.push_back(node->val);
        }
        dfs(node->left, leaf);
        dfs(node->right, leaf);
    }
};