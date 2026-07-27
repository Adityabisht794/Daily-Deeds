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
    void check(TreeNode* root,vector<int>&ans)
    {
        if(root == NULL)
            return;
        if(!root->right&&!root->left) ans.push_back(root->val);
        if(root->right||root->left)
        {
            check(root->left,ans);
            check(root->right,ans);
        }
        return ;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a,b;
        check(root1,a);
        check(root2,b);
        return (a==b)? true: false;
    }
};