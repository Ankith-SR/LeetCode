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
    static TreeNode* build(vector<int>& inorder, vector<int>& postorder, int left, int right, unordered_map<int, int>& mp, int& Pind){
        if(left > right){
            return nullptr;
        }
        int curr = postorder[Pind--];
        TreeNode* root = new TreeNode(curr);
        if(left == right){
            return root;
        }
        int inind = mp[curr];
        root->right = build(inorder, postorder, inind+1, right, mp, Pind);
        root->left = build(inorder, postorder, left, inind-1, mp, Pind);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int Pind = postorder.size()-1;
        unordered_map<int, int> mp;
        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        return build(inorder, postorder, 0, inorder.size()-1, mp, Pind);
    }
};