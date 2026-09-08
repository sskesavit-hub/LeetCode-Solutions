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
    bool isMirror(TreeNode* left,TreeNode* right){
        if(right==nullptr && left==nullptr)  return true;

        if(right==nullptr || left==nullptr)  return false;

        return (left->val == right->val) && isMirror(left->right,right->left) && isMirror   (right->right,left->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)
           return false;

        return isMirror(root->left,root->right); 
        
    }
};