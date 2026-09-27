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
    int dfs(TreeNode*root,bool& isbalanced){
        if(!root)
        return 0;
        int left=dfs(root->left,isbalanced);
        int right=dfs(root->right,isbalanced);
        if(abs(left-right)>1)
        isbalanced= false;
        return 1+max(left,right);
    }
public:
    bool isBalanced(TreeNode* root) {
        bool isbalanced=true;;
        dfs(root,isbalanced);
        return isbalanced;
    }
};
