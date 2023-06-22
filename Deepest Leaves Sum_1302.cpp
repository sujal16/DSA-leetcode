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
    int levelorder (TreeNode* root){
        queue <TreeNode*> q;
        int sum = 0;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp==NULL){
                if(!q.empty()){
                    q.push(NULL);
                    sum = 0;
                }
            }
            else{
                sum += temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        } return sum;
    }
    int deepestLeavesSum(TreeNode* root) {
        int ans = levelorder(root);
        return ans;
    }
};