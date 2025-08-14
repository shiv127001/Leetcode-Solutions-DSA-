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

    void postorderTraversal_helper(TreeNode* root, vector<int> &temp)
    {
        if(root ==NULL) 
            return;
        postorderTraversal_helper(root->left,temp);
        postorderTraversal_helper(root->right,temp);
        temp.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> temp;
        postorderTraversal_helper(root, temp);
        return temp;
    }
};