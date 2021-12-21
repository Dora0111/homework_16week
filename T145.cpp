class Solution
{
public:
    void postOrder(TreeNode *T, vector<int> &res)
    {
        if (!T)
        {
            return;
        }
        postOrder(T->left, res);
        postOrder(T->right, res);
        res.push_back(T->val);
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> res;
        postOrder(root, res);
        return res;
    }
};

