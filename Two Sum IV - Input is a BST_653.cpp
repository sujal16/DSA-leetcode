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
    void traverse(TreeNode* root,vector <int>& ans){
        if(root==NULL){
            return;
        }
        traverse(root->left,ans);
        traverse(root->right,ans);
        ans.push_back(root->val);
    }
    bool findTarget(TreeNode* root, int k) {
        if(root->left==NULL && root->right==NULL) return false;
        vector <int> ans;
        traverse(root,ans);
        vector <int> sum;
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[j]+ans[i]==k){
                    sum.push_back(ans[i]);
                    sum.push_back(ans[j]);
                }
            }
        }
        if(sum.size()>0){
            return true;
        }
        else{
            return false;
        }
    }
};