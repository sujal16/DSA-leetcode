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
    void traverse(TreeNode* root,int individualSum ,int& sum){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            individualSum = individualSum*10 + root->val;
            sum += individualSum;
            return;
        }
        individualSum = individualSum*10 + root->val;
        traverse(root->left,individualSum,sum);
        traverse(root->right,individualSum,sum);
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        traverse(root,0,sum);
        return sum;
    }
};
