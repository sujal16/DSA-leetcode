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
    void traverse(TreeNode* root,int& value){
        if(root==NULL){
            return;
        }
        traverse(root->right,value);
        value += root->val;
        root->val = value;
        traverse(root->left,value);
    }
    TreeNode* convertBST(TreeNode* root) {
        int value = 0;
        traverse(root,value);
        return root;
    }
};