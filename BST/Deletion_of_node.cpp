class Solution {
public:
    // Inorder predecessor (rightmost node of left subtree)
    TreeNode* iop(TreeNode* root) {
        TreeNode* pred = root->left;
        while (pred->right != NULL) {
            pred = pred->right;
        }
        return pred;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) return NULL;

        if (root->val == key) {
            // Case 1: No child
            if (root->left == NULL && root->right == NULL) {
                return NULL;
            }
            // Case 2: One child
            if (root->left == NULL) return root->right;
            if (root->right == NULL) return root->left;

            // Case 3: Two children
            TreeNode* pred = iop(root);       // find inorder predecessor
            root->val = pred->val;            // copy value
            root->left = deleteNode(root->left, pred->val); // delete pred
        }
        else if (key < root->val) {
            root->left = deleteNode(root->left, key);
        }
        else {
            root->right = deleteNode(root->right, key);
        }

        return root;
    }
};