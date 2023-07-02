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
    int maxLevelSum(TreeNode* root) {
        queue <TreeNode*> q;
        int sum = 0;
        int maxi = INT_MIN;
        int k = 1;
        int ans = 0;
        q.push(root);
        q.push(NULL);
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
                sum += temp->val;
            }
            else{
                if(!q.empty()){
                    q.push(NULL);;
                }
                if(sum>maxi){
                        maxi = sum;
                        ans = k;
                    }
                    sum = 0;
                    k += 1;
            }
        }
        return ans;
    }
};