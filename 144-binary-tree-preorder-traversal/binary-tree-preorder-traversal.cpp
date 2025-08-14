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

    void preorderTraversal_helper(TreeNode* root, vector<int> &temp){
        if(root ==NULL)
            return;
        temp.push_back(root->val);
        preorderTraversal_helper(root->left,temp);
        preorderTraversal_helper(root->right,temp);
        return ;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> temp;
        preorderTraversal_helper(root,temp);
        return temp;

    }
};