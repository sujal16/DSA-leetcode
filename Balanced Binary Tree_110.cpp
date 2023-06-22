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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int ans = 1 + max(leftHeight,rightHeight);
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        bool ans1 = isBalanced(root->left);
        bool ans2 = isBalanced(root->right);
        int leftTree = height(root->left);
        int rightTree = height(root->right);
        bool ans = abs(rightTree-leftTree)<=1;
        if(ans && ans1 && ans2){
            return true;
        }
        else{
            return false;
        }
    }
};
