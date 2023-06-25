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
    bool checkIncreasing(vector <int> ans){
        int maxi = ans[ans.size()-1];
        int max2 = INT_MIN;
        for(int i=0;i<ans.size()-1;i++){
            max2 = max(max2,ans[i]);
        }
        if(max2>maxi){
            return false;
        }
        else{
            return true;
        }
    }
    void traverse(TreeNode* root,vector <int> ans,int& sum){
        if(root==NULL){
            return; 
        }
        ans.push_back(root->val);
        if(ans.size()==1){
            sum++;
        }
        else{
            if(checkIncreasing(ans)){
                sum++;
            }
        }
        traverse(root->left,ans,sum);
        traverse(root->right,ans,sum);
    }
    int goodNodes(TreeNode* root) {
        vector <int> num;
        int sum = 0;
        traverse(root,num,sum);
        return sum;
    }
};