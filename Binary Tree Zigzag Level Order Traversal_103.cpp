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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){
            vector<vector<int>> v;
            return v;
        }
        vector<vector<int>> ans;
        queue <TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector <int> arr;
        int k = 1;
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
                if(k%2==0){
                    reverse(arr.begin(),arr.end());
                }
                if(!q.empty()){
                    q.push(NULL);
                    ans.push_back(arr);
                    arr.resize(0);
                    k++;
                }
                else{
                    ans.push_back(arr);
                }
            }
        }
        return ans;
    }
};

