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
    void treeVector(TreeNode* root,vector <int>& ans){
        if(root==NULL){
            return;
        }
        treeVector(root->left,ans);
        ans.push_back(root->val);
        treeVector(root->right,ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL) return NULL;
        vector <int> ans;
        treeVector(root,ans);
        TreeNode* head = new TreeNode(ans[0],NULL,NULL);
        TreeNode* temp = head;
        for(int i=1;i<ans.size();i++){
            temp->right = new TreeNode(ans[i],NULL,NULL);
            temp = temp->right;
        }
        return head;
    }
};