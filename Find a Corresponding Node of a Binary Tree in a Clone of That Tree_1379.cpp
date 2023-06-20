/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void sol(TreeNode* cloned, TreeNode* target,TreeNode* &ans){
    if(cloned==NULL){
        return;
    }
    if(cloned->val==target->val){
        ans = cloned;
    }
    sol(cloned->left,target,ans);
    sol(cloned->right,target,ans);
}
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = NULL;
        sol(cloned,target,ans);
        return ans;
    }
};