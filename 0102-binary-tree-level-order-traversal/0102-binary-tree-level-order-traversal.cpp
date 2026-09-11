class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if (root == nullptr)
            return ans;

        queue<TreeNode*> q;

        q.push(root);
        q.push(nullptr);

        vector<int> level;

        while (!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();

            if (curr == nullptr)
            {
                ans.push_back(level);
                level.clear();

                if (!q.empty())
                    q.push(nullptr);
            }
            else
            {
                level.push_back(curr->val);

                if (curr->left)
                    q.push(curr->left);

                if (curr->right)
                    q.push(curr->right);
            }
        }

        return ans;
    }
};