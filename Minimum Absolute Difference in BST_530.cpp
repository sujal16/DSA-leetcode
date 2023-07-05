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
    void traverse(TreeNode* root,int& previous,int& ans){
        if(root==NULL){
            return;
        }
        traverse(root->left,previous,ans);
        if(previous!=-1) ans = min(ans,root->val-previous);
        previous = root->val;
        traverse(root->right,previous,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        int previousElement = -1;
        int ans = INT_MAX;
        traverse(root,previousElement,ans);
        return ans;
    }
};

