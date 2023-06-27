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
    void traverse(TreeNode* root,int sum,int targetsum,bool& ans){
        if(root==NULL){
            return ;
        }
        if(root->right==NULL && root->left==NULL){
            sum += root->val;
            if(sum==targetsum){
                ans = true;
            }
            return;
        }
        sum += root->val;
        traverse(root->left,sum,targetsum,ans);
        traverse(root->right,sum,targetsum,ans);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = false;
        traverse(root,0,targetSum,ans);
        if(ans){
            return true;
        }
        else{
            return false;
        }
    }
};
