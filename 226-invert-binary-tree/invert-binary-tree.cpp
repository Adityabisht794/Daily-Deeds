class Solution {
public:
    void change(TreeNode* &a, TreeNode* &b)
    {
        swap(a, b);

        if(a) change(a->left, a->right);
        if(b) change(b->left, b->right);
    }

    TreeNode* invertTree(TreeNode* root)
    {
        if(!root) return nullptr;

        change(root->left, root->right);
        return root;
    }
};