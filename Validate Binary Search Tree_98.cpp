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
    bool traverse(TreeNode* root,long long int maxi,long long int mini){
        if(root==NULL){
            return true;
        }
        bool ans = false;
        if(maxi<root->val && root->val<mini){
            ans = true;
        }
        bool leftTree = traverse(root->left,maxi,root->val);
        bool rightTree = traverse(root->right,root->val,mini);
        if(leftTree && rightTree && ans){
            return true;
        }
        else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        long long int maxi = -4294967295;
        long long int mini = 4294967295;
        bool ans = traverse(root,maxi,mini);
        return ans;
    }
};

