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
void check(TreeNode* root, bool &flag, long long low, long long high)
{
    if (!root || !flag)
        return;

    if (root->val <= low || root->val >= high)
    {
        flag = false;
        return;
    }

    check(root->left, flag, low, root->val);
    check(root->right, flag, root->val, high);
}

bool isValidBST(TreeNode* root)
{
    bool flag = true;
    check(root, flag, LLONG_MIN, LLONG_MAX);
    return flag;
}
};