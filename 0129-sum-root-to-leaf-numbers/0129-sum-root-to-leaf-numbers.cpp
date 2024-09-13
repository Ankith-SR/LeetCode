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
    void track(TreeNode* node, string temp, vector<string>& store){
        if(node == NULL){
            return;
        }
        temp += to_string(node->val);
        if (node->left == nullptr && node->right == nullptr) {
            store.push_back(temp);
            return;
        }
        track(node->left, temp, store);
        track(node->right, temp, store);
    }
    int sumNumbers(TreeNode* root) {
        vector<string> store;
        string temp = "";
        track(root, temp, store);
        int ans = 0;
        for(const auto& it : store){
            ans += stoi(it);
        }
        return ans;
    }
};