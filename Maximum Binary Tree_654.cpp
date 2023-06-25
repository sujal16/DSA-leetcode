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
    int findMaxValueIndex(vector<int> nums,int start,int end){
        int findIndex = -1;
        int maxi = INT_MIN;
        for(int i=start;i<=end;i++){
            if(maxi<nums[i]){
                maxi = nums[i];
                findIndex = i;
            }
        }
        return findIndex;
    }
    TreeNode* traverse(TreeNode* root,vector<int> nums,int startIndex,int endIndex){
        if(startIndex>endIndex){
            return NULL;
        }
        int Index = findMaxValueIndex(nums,startIndex,endIndex);
        root = new TreeNode(nums[Index]);
        root->left = traverse(root,nums,startIndex,Index-1);
        root->right = traverse(root,nums,Index+1,endIndex);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* Node = NULL;
        return traverse(Node,nums,0,nums.size()-1);;
    }
};