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
    int sumBst(TreeNode* root,int low,int high,int sum){
        if(root==NULL){
            return 0;
        }
        int leftSum = sumBst(root->left,low,high,sum);
        int rightSum = sumBst(root->right,low,high,sum);
        if(root->val>=low && root->val<=high){
            sum += root->val;
        }
        int ans = leftSum + rightSum + sum;
        return ans;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        int ans = sumBst(root,low,high,sum);
        return ans;
    }
};