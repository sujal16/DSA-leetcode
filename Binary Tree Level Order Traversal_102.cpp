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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            vector<vector<int>> v;
            return v;
        }
        vector<vector<int>> ans;
        queue <TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector <int> arr;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp){
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                arr.push_back(temp->val);
            }
            else{
                if(!q.empty()){
                    q.push(NULL);
                    ans.push_back(arr);
                    arr.resize(0);
                }
            }
        } 
        ans.push_back(arr);
        return ans;
    }
};

