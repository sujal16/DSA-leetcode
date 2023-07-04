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
private:
        vector<vector<int>> ans;
public:
    int checkSum(vector <int> v){
        int sum = 0;
        for(int i=0;i<v.size();i++){
            sum+= v[i];
        }
        return sum;
    }
    void traverse(vector <int>& v,TreeNode* root,int targetSum){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            int sum = checkSum(v);
            if(sum==targetSum){
                ans.push_back(v);
            }
        }
        traverse(v,root->left,targetSum);
        traverse(v,root->right,targetSum);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector <int> v;
        traverse(v,root,targetSum);
        return ans;
    }
};

