
class Solution {
public:
    vector<int> ivec;
    vector<int> preorderTraversal(TreeNode* root) 
    {
        preTrav(root,ivec);
        return ivec;  
    }

    void preTrav(TreeNode* root,vector<int>& ivec)
    {
        if(!root)
        {
            return;
        }
        ivec.push_back(root->val);
        preTrav(root->left,ivec);
        preTrav(root->right,ivec);
    }
};

