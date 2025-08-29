class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            return new TreeNode(val);
        }
        else if (val < root->val) {
            root->left = insertIntoBST(root->left, val);
        } 
        else {
            root->right = insertIntoBST(root->right, val);
        }
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        for(int i = 1; i < preorder.size(); i++){
            insertIntoBST(root, preorder[i]);
        }
        return root;
    }
};
