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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pInd = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }
        return build(preorder, inorder, 0, preorder.size()-1, mp, pInd);
    }
    static TreeNode* build(vector<int>& preorder, vector<int>& inorder, int left, int right, unordered_map<int,int>& mp,int& pInd){
        if(left > right){
            return nullptr;
        }
        int curr = preorder[pInd++];
        TreeNode* root = new TreeNode(curr);
        if(left == right){
            return root;
        }
        int inInd = mp[curr];
        root->left = build(preorder, inorder, left, inInd-1, mp, pInd);
        root->right = build(preorder, inorder, inInd+1, right, mp, pInd);
        return root;
    }
};