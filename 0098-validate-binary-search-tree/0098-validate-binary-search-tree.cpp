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
    bool isV(TreeNode* root,long long l ,long long h) {
        if(root==nullptr)
            return true;
        
        if(root->val<=l || root->val>=h)
            return false;
        
        return isV(root->left,l,root->val) && isV(root->right,root->val,h);
    }
    bool isValidBST(TreeNode* root){
        return isV(root,LLONG_MIN,LLONG_MAX);
     }
};