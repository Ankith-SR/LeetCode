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
    long long kthLargestLevelSum(TreeNode* root, int k) {

        vector<long long int> v;
        queue<TreeNode*> q;
        long long int sum;
        q.push(root);

        while(!q.empty()){
            int s = q.size();
            sum = 0;
            for(int i = 0; i < s; i++){
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            v.push_back(sum);
        }
        sort(v.begin(), v.end(), greater<>());
        if(v.size() < k){
            return -1;
        }
        else{
            return v[k-1];
        }
    }
};