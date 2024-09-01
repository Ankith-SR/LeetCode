class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL){
            return NULL;
        }
        if(root->left != NULL){
            root->left->next = root->right != NULL ? root->right : findnext(root->next);
        }
        if(root->right != NULL){
            root->right->next = findnext(root->next);
        }
        connect(root->right);
        connect(root->left);
        return root;
    }

    Node* findnext(Node* curr) {
        if(curr == NULL){
            return NULL;
        }
        if(curr->left != NULL){
            return curr->left;
        }
        if(curr->right != NULL){
            return curr->right;
        }
        return findnext(curr->next);
    }
};
