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
    void traverse(TreeNode* root,vector<int>& ans){
        if(root==NULL){
            return;
        }
        traverse(root->left,ans);
        traverse(root->right,ans);
        ans.push_back(root->val);
    }
    bool isUnivalTree(TreeNode* root) {
        if (root==NULL) return root;
        vector <int> ans;
        traverse(root,ans);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]!=ans[i+1]){
                return false;
            }
        } return true;
    }
};