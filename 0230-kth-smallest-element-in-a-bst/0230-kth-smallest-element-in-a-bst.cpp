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
    vector<int>a;
    void inO(TreeNode* root){
        if(root == nullptr)
            return;
        inO(root->left);
        a.push_back(root->val);
        inO(root->right);

    }
    int kthSmallest(TreeNode* root, int k) {
        inO(root);
        return a[k-1];
    }
};